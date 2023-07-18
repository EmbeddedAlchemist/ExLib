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
    : periph(getI2CPeriphByName(I2CName)) {
    setPins(pinSCL, pinSDA);
}

bool I2C::write(char ch) {
    DeviceSupport::I2CMasterDataPut(periph, ch);
    if (slaveAddrIsNotSend) {
        // 从闲置状态开始发送
        DeviceSupport::I2CMasterSlaveAddrSet(periph, slaveAddr, false); // 设置从机地址
        DeviceSupport::I2CMasterControl(periph, I2C_MASTER_CMD_BURST_SEND_START);
        slaveAddrIsNotSend = false;
    } else if (direction != I2C_Direction::Write) {
        // 从接收转为发送
        DeviceSupport::I2CMasterSlaveAddrSet(periph, slaveAddr, false); // 设置从机地址
        DeviceSupport::I2CMasterControl(periph, I2C_MASTER_CMD_BURST_SEND_START);

    } else {
        // 连续发送D
        DeviceSupport::I2CMasterControl(periph, I2C_MASTER_CMD_BURST_SEND_CONT);
    }
    direction = I2C_Direction::Write;
    while (DeviceSupport::I2CMasterBusy(periph) != false) {
        /* code */
    }

    return false;
}

bool I2C::read(char &ch) {
    if (slaveAddrIsNotSend) {
        // 从闲置状态开始发送
        DeviceSupport::I2CMasterSlaveAddrSet(periph, slaveAddr, true); // 设置从机地址
        DeviceSupport::I2CMasterControl(periph, I2C_MASTER_CMD_BURST_RECEIVE_START);
        slaveAddrIsNotSend = false;
    } else if (direction != I2C_Direction::Read) {
        // 从接收转为发送
        DeviceSupport::I2CMasterSlaveAddrSet(periph, slaveAddr, true); // 设置从机地址
        DeviceSupport::I2CMasterControl(periph, I2C_MASTER_CMD_BURST_RECEIVE_START);

    } else {
        // 连续发送
        DeviceSupport::I2CMasterControl(periph, I2C_MASTER_CMD_BURST_RECEIVE_CONT);
    }
    direction = I2C_Direction::Read;
    while (DeviceSupport::I2CMasterBusy(periph) != false) {
    }
    ch = DeviceSupport::I2CMasterDataGet(periph);
    return false;
}

void I2C::setPins(GPIO_Pin scl, GPIO_Pin sda) {
    if (isLegalI2CPin(periph, scl, sda) == false) {
        Exception::raiseException("Illegal I2C pin");
    }
    pinSCL = scl;
    pinSDA = sda;
}

void I2C::begin(Frequency freq, std::uint8_t selfAddr) {
    configI2CClock(*this, true);
    if (freq.hz < (400_kHz).hz) {
        DeviceSupport::I2CMasterInitExpClk(periph, DeviceSupport::SysCtlClockGet(), false);
    } else if (freq.hz <= (400_kHz).hz && freq.hz < (1_MHz).hz) {
        DeviceSupport::I2CMasterInitExpClk(periph, DeviceSupport::SysCtlClockGet(), true);
    } else if (freq.hz <= (1_MHz).hz && freq.hz < (3400_kHz).hz) {
        DeviceSupport::I2CMasterInitExpClk(periph, DeviceSupport::SysCtlClockGet(), true);
        // TODO: write I2CMTPR

    } else if (freq.hz >= (3400_kHz).hz) {
        DeviceSupport::I2CMasterInitExpClk(periph, DeviceSupport::SysCtlClockGet(), true);
        // TODO: a specific command is used to switch to the faster clocks after the initial communication with the slave is done at either 100 Kbps or 400 Kbps
    }
    // DeviceSupport::I2CMasterSlaveAddrSet(periph, selfAddr, )
    configI2CPin(periph, pinSCL, pinSDA);
    // DeviceSupport::I2CSlaveEnable(periph);
    // DeviceSupport::I2CSlaveInit(periph, selfAddr);
}

/**
 * @brief
 *
 * @param addr i2c 从机的7位地址
 * @param direction
 * @return true 成功与该地址上的器件建立连接
 * @return false 未能与该地址上的器件建立连接
 */
void I2C::beginTransmission(std::uint8_t addr) {
    slaveAddr = addr;
    slaveAddrIsNotSend = true;
}

void I2C::endTransmission() {
    if(slaveAddrIsNotSend==true){
        //此时还没发送起始信号就尝试结束通信，什么也不做
        slaveAddrIsNotSend = false;
        return;
    }
    if (direction == I2C_Direction::Read)
        DeviceSupport::I2CMasterControl(periph, I2C_MASTER_CMD_BURST_RECEIVE_ERROR_STOP);
    else if (direction == I2C_Direction::Write)
        DeviceSupport::I2CMasterControl(periph, I2C_MASTER_CMD_BURST_SEND_ERROR_STOP);
    while (DeviceSupport::I2CMasterBusy(periph) != false) {
    }
}

I2C::operator I2C_Periph() {
    return getI2CNameByPeriph(periph);
}

} // namespace ExLib
