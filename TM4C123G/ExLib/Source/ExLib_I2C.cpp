#include "ExLib_I2C.hpp"
#include "ExLib_Exception.hpp"

#include "DeviceSupport/DeviceSupport.hpp"
#include "Util_I2C.hpp"

namespace ExLib {

I2C::I2C(I2C_Periph I2CName)
    : I2C(I2CName,
          getI2CDefaultSCLPin(I2CName),
          getI2CDefaultSDAPin(I2CName)) {
}

I2C::I2C(I2C_Periph I2CName, GPIO_Pin pinSCL, GPIO_Pin pinSDA) 
: periph(getI2CPeriphByName(I2CName)){
    setPins(pinSCL, pinSDA);
}

void I2C::setPins(GPIO_Pin scl, GPIO_Pin sda) {
    if(isLegalI2CPin(periph, scl, sda) == false){
        ExLib_Exception::raiseException("Illegal I2C pin");
    }
    pinSCL = scl;
    pinSDA = sda;
}

void I2C::begin(Frequency freq, std::uint8_t selfAddr = 0x00) {
    // TODO: configI2CClock(*this, true);
    if(freq.hz < (400_kHz).hz){
        DeviceSupport::I2CMasterInitExpClk(periph, DeviceSupport::SysCtlClockGet(), false);
    }
    else if(freq.hz <= (400_kHz).hz && freq.hz < (1_MHz).hz){
        DeviceSupport::I2CMasterInitExpClk(periph, DeviceSupport::SysCtlClockGet(), true);
    }
    else if(freq.hz <= (1_MHz).hz && freq.hz <(3400_kHz).hz ){
        DeviceSupport::I2CMasterInitExpClk(periph, DeviceSupport::SysCtlClockGet(), true);
        //TODO: write I2CMTPR

    }else if(freq.hz >= (3400_kHz).hz){
        DeviceSupport::I2CMasterInitExpClk(periph, DeviceSupport::SysCtlClockGet(), true);
        //TODO: a specific command is used to switch to the faster clocks after the initial communication with the slave is done at either 100 Kbps or 400 Kbps
    }
    //DeviceSupport::I2CMasterSlaveAddrSet(periph, selfAddr, )

}

/**
 * @brief 
 * 
 * @param addr i2c 从机的7位地址
 * @param direction 
 * @return true 成功与该地址上的器件建立连接
 * @return false 未能与该地址上的器件建立连接
 */
bool I2C::startTransmission(std::uint8_t addr, I2C_Direction direction) {
    std::uint32_t cmd;
    if(direction == I2C_Direction::Read){
        cmd = I2C_MASTER_CMD_BURST_SEND_START;
    }else if(direction == I2C_Direction::Write){
        cmd == I2C_MASTER_CMD_BURST_RECEIVE_START;
    }
    DeviceSupport::I2CMasterSlaveAddrSet(periph, addr, direction == I2C_Direction::Read);
    DeviceSupport::I2CMasterControl(periph, cmd);
    while(DeviceSupport::I2CMasterBusy(periph))
        ;


    return false;
}

} // namespace ExLib
