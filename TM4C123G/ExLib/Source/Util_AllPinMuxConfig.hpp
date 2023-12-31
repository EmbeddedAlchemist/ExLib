#pragma once

#ifndef __DRIVERLIB_PIN_MAP_H__
#include "DeviceSupport/DeviceSupport.hpp"
#endif


#ifndef GPIO_PA0_U0RX
#define GPIO_PA0_U0RX 0x00000001
#endif
#ifndef GPIO_PA0_CAN1RX
#define GPIO_PA0_CAN1RX 0x00000008
#endif
#ifndef GPIO_PA1_U0TX
#define GPIO_PA1_U0TX 0x00000401
#endif
#ifndef GPIO_PA1_CAN1TX
#define GPIO_PA1_CAN1TX 0x00000408
#endif
#ifndef GPIO_PA2_SSI0CLK
#define GPIO_PA2_SSI0CLK 0x00000802
#endif
#ifndef GPIO_PA3_SSI0FSS
#define GPIO_PA3_SSI0FSS 0x00000C02
#endif
#ifndef GPIO_PA4_SSI0RX
#define GPIO_PA4_SSI0RX 0x00001002
#endif
#ifndef GPIO_PA5_SSI0TX
#define GPIO_PA5_SSI0TX 0x00001402
#endif
#ifndef GPIO_PA6_I2C1SCL
#define GPIO_PA6_I2C1SCL 0x00001803
#endif
#ifndef GPIO_PA6_M1PWM2
#define GPIO_PA6_M1PWM2 0x00001805
#endif
#ifndef GPIO_PA7_I2C1SDA
#define GPIO_PA7_I2C1SDA 0x00001C03
#endif
#ifndef GPIO_PA7_M1PWM3
#define GPIO_PA7_M1PWM3 0x00001C05
#endif
#ifndef GPIO_PB0_U1RX
#define GPIO_PB0_U1RX 0x00010001
#endif
#ifndef GPIO_PB0_T2CCP0
#define GPIO_PB0_T2CCP0 0x00010007
#endif
#ifndef GPIO_PB1_U1TX
#define GPIO_PB1_U1TX 0x00010401
#endif
#ifndef GPIO_PB1_T2CCP1
#define GPIO_PB1_T2CCP1 0x00010407
#endif
#ifndef GPIO_PB2_I2C0SCL
#define GPIO_PB2_I2C0SCL 0x00010803
#endif
#ifndef GPIO_PB2_T3CCP0
#define GPIO_PB2_T3CCP0 0x00010807
#endif
#ifndef GPIO_PB3_I2C0SDA
#define GPIO_PB3_I2C0SDA 0x00010C03
#endif
#ifndef GPIO_PB3_T3CCP1
#define GPIO_PB3_T3CCP1 0x00010C07
#endif
#ifndef GPIO_PB4_SSI2CLK
#define GPIO_PB4_SSI2CLK 0x00011002
#endif
#ifndef GPIO_PB4_M0PWM2
#define GPIO_PB4_M0PWM2 0x00011004
#endif
#ifndef GPIO_PB4_T1CCP0
#define GPIO_PB4_T1CCP0 0x00011007
#endif
#ifndef GPIO_PB4_CAN0RX
#define GPIO_PB4_CAN0RX 0x00011008
#endif
#ifndef GPIO_PB5_SSI2FSS
#define GPIO_PB5_SSI2FSS 0x00011402
#endif
#ifndef GPIO_PB5_M0PWM3
#define GPIO_PB5_M0PWM3 0x00011404
#endif
#ifndef GPIO_PB5_T1CCP1
#define GPIO_PB5_T1CCP1 0x00011407
#endif
#ifndef GPIO_PB5_CAN0TX
#define GPIO_PB5_CAN0TX 0x00011408
#endif
#ifndef GPIO_PB6_SSI2RX
#define GPIO_PB6_SSI2RX 0x00011802
#endif
#ifndef GPIO_PB6_I2C5SCL
#define GPIO_PB6_I2C5SCL 0x00011803
#endif
#ifndef GPIO_PB6_M0PWM0
#define GPIO_PB6_M0PWM0 0x00011804
#endif
#ifndef GPIO_PB6_T0CCP0
#define GPIO_PB6_T0CCP0 0x00011807
#endif
#ifndef GPIO_PB7_SSI2TX
#define GPIO_PB7_SSI2TX 0x00011C02
#endif
#ifndef GPIO_PB7_I2C5SDA
#define GPIO_PB7_I2C5SDA 0x00011C03
#endif
#ifndef GPIO_PB7_M0PWM1
#define GPIO_PB7_M0PWM1 0x00011C04
#endif
#ifndef GPIO_PB7_T0CCP1
#define GPIO_PB7_T0CCP1 0x00011C07
#endif
#ifndef GPIO_PC0_TCK
#define GPIO_PC0_TCK 0x00020001
#endif
#ifndef GPIO_PC0_SWCLK
#define GPIO_PC0_SWCLK 0x00020001
#endif
#ifndef GPIO_PC0_T4CCP0
#define GPIO_PC0_T4CCP0 0x00020007
#endif
#ifndef GPIO_PC1_TMS
#define GPIO_PC1_TMS 0x00020401
#endif
#ifndef GPIO_PC1_SWDIO
#define GPIO_PC1_SWDIO 0x00020401
#endif
#ifndef GPIO_PC1_T4CCP1
#define GPIO_PC1_T4CCP1 0x00020407
#endif
#ifndef GPIO_PC2_TDI
#define GPIO_PC2_TDI 0x00020801
#endif
#ifndef GPIO_PC2_T5CCP0
#define GPIO_PC2_T5CCP0 0x00020807
#endif
#ifndef GPIO_PC3_SWO
#define GPIO_PC3_SWO 0x00020C01
#endif
#ifndef GPIO_PC3_TDO
#define GPIO_PC3_TDO 0x00020C01
#endif
#ifndef GPIO_PC3_T5CCP1
#define GPIO_PC3_T5CCP1 0x00020C07
#endif
#ifndef GPIO_PC4_U4RX
#define GPIO_PC4_U4RX 0x00021001
#endif
#ifndef GPIO_PC4_U1RX
#define GPIO_PC4_U1RX 0x00021002
#endif
#ifndef GPIO_PC4_M0PWM6
#define GPIO_PC4_M0PWM6 0x00021004
#endif
#ifndef GPIO_PC4_IDX1
#define GPIO_PC4_IDX1 0x00021006
#endif
#ifndef GPIO_PC4_WT0CCP0
#define GPIO_PC4_WT0CCP0 0x00021007
#endif
#ifndef GPIO_PC4_U1RTS
#define GPIO_PC4_U1RTS 0x00021008
#endif
#ifndef GPIO_PC5_U4TX
#define GPIO_PC5_U4TX 0x00021401
#endif
#ifndef GPIO_PC5_U1TX
#define GPIO_PC5_U1TX 0x00021402
#endif
#ifndef GPIO_PC5_M0PWM7
#define GPIO_PC5_M0PWM7 0x00021404
#endif
#ifndef GPIO_PC5_PHA1
#define GPIO_PC5_PHA1 0x00021406
#endif
#ifndef GPIO_PC5_WT0CCP1
#define GPIO_PC5_WT0CCP1 0x00021407
#endif
#ifndef GPIO_PC5_U1CTS
#define GPIO_PC5_U1CTS 0x00021408
#endif
#ifndef GPIO_PC6_U3RX
#define GPIO_PC6_U3RX 0x00021801
#endif
#ifndef GPIO_PC6_PHB1
#define GPIO_PC6_PHB1 0x00021806
#endif
#ifndef GPIO_PC6_WT1CCP0
#define GPIO_PC6_WT1CCP0 0x00021807
#endif
#ifndef GPIO_PC6_USB0EPEN
#define GPIO_PC6_USB0EPEN 0x00021808
#endif
#ifndef GPIO_PC7_U3TX
#define GPIO_PC7_U3TX 0x00021C01
#endif
#ifndef GPIO_PC7_WT1CCP1
#define GPIO_PC7_WT1CCP1 0x00021C07
#endif
#ifndef GPIO_PC7_USB0PFLT
#define GPIO_PC7_USB0PFLT 0x00021C08
#endif
#ifndef GPIO_PD0_SSI3CLK
#define GPIO_PD0_SSI3CLK 0x00030001
#endif
#ifndef GPIO_PD0_SSI1CLK
#define GPIO_PD0_SSI1CLK 0x00030002
#endif
#ifndef GPIO_PD0_I2C3SCL
#define GPIO_PD0_I2C3SCL 0x00030003
#endif
#ifndef GPIO_PD0_M0PWM6
#define GPIO_PD0_M0PWM6 0x00030004
#endif
#ifndef GPIO_PD0_M1PWM0
#define GPIO_PD0_M1PWM0 0x00030005
#endif
#ifndef GPIO_PD0_WT2CCP0
#define GPIO_PD0_WT2CCP0 0x00030007
#endif
#ifndef GPIO_PD1_SSI3FSS
#define GPIO_PD1_SSI3FSS 0x00030401
#endif
#ifndef GPIO_PD1_SSI1FSS
#define GPIO_PD1_SSI1FSS 0x00030402
#endif
#ifndef GPIO_PD1_I2C3SDA
#define GPIO_PD1_I2C3SDA 0x00030403
#endif
#ifndef GPIO_PD1_M0PWM7
#define GPIO_PD1_M0PWM7 0x00030404
#endif
#ifndef GPIO_PD1_M1PWM1
#define GPIO_PD1_M1PWM1 0x00030405
#endif
#ifndef GPIO_PD1_WT2CCP1
#define GPIO_PD1_WT2CCP1 0x00030407
#endif
#ifndef GPIO_PD2_SSI3RX
#define GPIO_PD2_SSI3RX 0x00030801
#endif
#ifndef GPIO_PD2_SSI1RX
#define GPIO_PD2_SSI1RX 0x00030802
#endif
#ifndef GPIO_PD2_M0FAULT0
#define GPIO_PD2_M0FAULT0 0x00030804
#endif
#ifndef GPIO_PD2_WT3CCP0
#define GPIO_PD2_WT3CCP0 0x00030807
#endif
#ifndef GPIO_PD2_USB0EPEN
#define GPIO_PD2_USB0EPEN 0x00030808
#endif
#ifndef GPIO_PD3_SSI3TX
#define GPIO_PD3_SSI3TX 0x00030C01
#endif
#ifndef GPIO_PD3_SSI1TX
#define GPIO_PD3_SSI1TX 0x00030C02
#endif
#ifndef GPIO_PD3_IDX0
#define GPIO_PD3_IDX0 0x00030C06
#endif
#ifndef GPIO_PD3_WT3CCP1
#define GPIO_PD3_WT3CCP1 0x00030C07
#endif
#ifndef GPIO_PD3_USB0PFLT
#define GPIO_PD3_USB0PFLT 0x00030C08
#endif
#ifndef GPIO_PD4_U6RX
#define GPIO_PD4_U6RX 0x00031001
#endif
#ifndef GPIO_PD4_WT4CCP0
#define GPIO_PD4_WT4CCP0 0x00031007
#endif
#ifndef GPIO_PD5_U6TX
#define GPIO_PD5_U6TX 0x00031401
#endif
#ifndef GPIO_PD5_WT4CCP1
#define GPIO_PD5_WT4CCP1 0x00031407
#endif
#ifndef GPIO_PD6_U2RX
#define GPIO_PD6_U2RX 0x00031801
#endif
#ifndef GPIO_PD6_M0FAULT0
#define GPIO_PD6_M0FAULT0 0x00031804
#endif
#ifndef GPIO_PD6_PHA0
#define GPIO_PD6_PHA0 0x00031806
#endif
#ifndef GPIO_PD6_WT5CCP0
#define GPIO_PD6_WT5CCP0 0x00031807
#endif
#ifndef GPIO_PD7_U2TX
#define GPIO_PD7_U2TX 0x00031C01
#endif
#ifndef GPIO_PD7_M0FAULT1
#define GPIO_PD7_M0FAULT1 0x00031C04
#endif
#ifndef GPIO_PD7_PHB0
#define GPIO_PD7_PHB0 0x00031C06
#endif
#ifndef GPIO_PD7_WT5CCP1
#define GPIO_PD7_WT5CCP1 0x00031C07
#endif
#ifndef GPIO_PD7_NMI
#define GPIO_PD7_NMI 0x00031C08
#endif
#ifndef GPIO_PE0_U7RX
#define GPIO_PE0_U7RX 0x00040001
#endif
#ifndef GPIO_PE1_U7TX
#define GPIO_PE1_U7TX 0x00040401
#endif
#ifndef GPIO_PE4_U5RX
#define GPIO_PE4_U5RX 0x00041001
#endif
#ifndef GPIO_PE4_I2C2SCL
#define GPIO_PE4_I2C2SCL 0x00041003
#endif
#ifndef GPIO_PE4_M0PWM4
#define GPIO_PE4_M0PWM4 0x00041004
#endif
#ifndef GPIO_PE4_M1PWM2
#define GPIO_PE4_M1PWM2 0x00041005
#endif
#ifndef GPIO_PE4_CAN0RX
#define GPIO_PE4_CAN0RX 0x00041008
#endif
#ifndef GPIO_PE5_U5TX
#define GPIO_PE5_U5TX 0x00041401
#endif
#ifndef GPIO_PE5_I2C2SDA
#define GPIO_PE5_I2C2SDA 0x00041403
#endif
#ifndef GPIO_PE5_M0PWM5
#define GPIO_PE5_M0PWM5 0x00041404
#endif
#ifndef GPIO_PE5_M1PWM3
#define GPIO_PE5_M1PWM3 0x00041405
#endif
#ifndef GPIO_PE5_CAN0TX
#define GPIO_PE5_CAN0TX 0x00041408
#endif
#ifndef GPIO_PE6_CAN1RX
#define GPIO_PE6_CAN1RX 0x00041808
#endif
#ifndef GPIO_PE7_U1RI
#define GPIO_PE7_U1RI 0x00041C01
#endif
#ifndef GPIO_PE7_CAN1TX
#define GPIO_PE7_CAN1TX 0x00041C08
#endif
#ifndef GPIO_PF0_U1RTS
#define GPIO_PF0_U1RTS 0x00050001
#endif
#ifndef GPIO_PF0_SSI1RX
#define GPIO_PF0_SSI1RX 0x00050002
#endif
#ifndef GPIO_PF0_CAN0RX
#define GPIO_PF0_CAN0RX 0x00050003
#endif
#ifndef GPIO_PF0_M1PWM4
#define GPIO_PF0_M1PWM4 0x00050005
#endif
#ifndef GPIO_PF0_PHA0
#define GPIO_PF0_PHA0 0x00050006
#endif
#ifndef GPIO_PF0_T0CCP0
#define GPIO_PF0_T0CCP0 0x00050007
#endif
#ifndef GPIO_PF0_NMI
#define GPIO_PF0_NMI 0x00050008
#endif
#ifndef GPIO_PF0_C0O
#define GPIO_PF0_C0O 0x00050009
#endif
#ifndef GPIO_PF0_TRD2
#define GPIO_PF0_TRD2 0x0005000E
#endif
#ifndef GPIO_PF1_U1CTS
#define GPIO_PF1_U1CTS 0x00050401
#endif
#ifndef GPIO_PF1_SSI1TX
#define GPIO_PF1_SSI1TX 0x00050402
#endif
#ifndef GPIO_PF1_M1PWM5
#define GPIO_PF1_M1PWM5 0x00050405
#endif
#ifndef GPIO_PF1_PHB0
#define GPIO_PF1_PHB0 0x00050406
#endif
#ifndef GPIO_PF1_T0CCP1
#define GPIO_PF1_T0CCP1 0x00050407
#endif
#ifndef GPIO_PF1_C1O
#define GPIO_PF1_C1O 0x00050409
#endif
#ifndef GPIO_PF1_TRD1
#define GPIO_PF1_TRD1 0x0005040E
#endif
#ifndef GPIO_PF2_U1DCD
#define GPIO_PF2_U1DCD 0x00050801
#endif
#ifndef GPIO_PF2_SSI1CLK
#define GPIO_PF2_SSI1CLK 0x00050802
#endif
#ifndef GPIO_PF2_M0FAULT0
#define GPIO_PF2_M0FAULT0 0x00050804
#endif
#ifndef GPIO_PF2_M1PWM6
#define GPIO_PF2_M1PWM6 0x00050805
#endif
#ifndef GPIO_PF2_T1CCP0
#define GPIO_PF2_T1CCP0 0x00050807
#endif
#ifndef GPIO_PF2_C2O
#define GPIO_PF2_C2O 0x00050809
#endif
#ifndef GPIO_PF2_TRD0
#define GPIO_PF2_TRD0 0x0005080E
#endif
#ifndef GPIO_PF3_U1DSR
#define GPIO_PF3_U1DSR 0x00050C01
#endif
#ifndef GPIO_PF3_SSI1FSS
#define GPIO_PF3_SSI1FSS 0x00050C02
#endif
#ifndef GPIO_PF3_CAN0TX
#define GPIO_PF3_CAN0TX 0x00050C03
#endif
#ifndef GPIO_PF3_M0FAULT1
#define GPIO_PF3_M0FAULT1 0x00050C04
#endif
#ifndef GPIO_PF3_M1PWM7
#define GPIO_PF3_M1PWM7 0x00050C05
#endif
#ifndef GPIO_PF3_T1CCP1
#define GPIO_PF3_T1CCP1 0x00050C07
#endif
#ifndef GPIO_PF3_TRCLK
#define GPIO_PF3_TRCLK 0x00050C0E
#endif
#ifndef GPIO_PF4_U1DTR
#define GPIO_PF4_U1DTR 0x00051001
#endif
#ifndef GPIO_PF4_M0FAULT2
#define GPIO_PF4_M0FAULT2 0x00051004
#endif
#ifndef GPIO_PF4_M1FAULT0
#define GPIO_PF4_M1FAULT0 0x00051005
#endif
#ifndef GPIO_PF4_IDX0
#define GPIO_PF4_IDX0 0x00051006
#endif
#ifndef GPIO_PF4_T2CCP0
#define GPIO_PF4_T2CCP0 0x00051007
#endif
#ifndef GPIO_PF4_USB0EPEN
#define GPIO_PF4_USB0EPEN 0x00051008
#endif
#ifndef GPIO_PF4_TRD3
#define GPIO_PF4_TRD3 0x0005100E
#endif
#ifndef GPIO_PF5_M0FAULT3
#define GPIO_PF5_M0FAULT3 0x00051404
#endif
#ifndef GPIO_PF5_T2CCP1
#define GPIO_PF5_T2CCP1 0x00051407
#endif
#ifndef GPIO_PF5_USB0PFLT
#define GPIO_PF5_USB0PFLT 0x00051408
#endif
#ifndef GPIO_PF6_I2C2SCL
#define GPIO_PF6_I2C2SCL 0x00051803
#endif
#ifndef GPIO_PF6_T3CCP0
#define GPIO_PF6_T3CCP0 0x00051807
#endif
#ifndef GPIO_PF7_I2C2SDA
#define GPIO_PF7_I2C2SDA 0x00051C03
#endif
#ifndef GPIO_PF7_M1FAULT0
#define GPIO_PF7_M1FAULT0 0x00051C05
#endif
#ifndef GPIO_PF7_T3CCP1
#define GPIO_PF7_T3CCP1 0x00051C07
#endif
#ifndef GPIO_PG0_I2C3SCL
#define GPIO_PG0_I2C3SCL 0x00060003
#endif
#ifndef GPIO_PG0_M1FAULT1
#define GPIO_PG0_M1FAULT1 0x00060005
#endif
#ifndef GPIO_PG0_PHA1
#define GPIO_PG0_PHA1 0x00060006
#endif
#ifndef GPIO_PG0_T4CCP0
#define GPIO_PG0_T4CCP0 0x00060007
#endif
#ifndef GPIO_PG1_I2C3SDA
#define GPIO_PG1_I2C3SDA 0x00060403
#endif
#ifndef GPIO_PG1_M1FAULT2
#define GPIO_PG1_M1FAULT2 0x00060405
#endif
#ifndef GPIO_PG1_PHB1
#define GPIO_PG1_PHB1 0x00060406
#endif
#ifndef GPIO_PG1_T4CCP1
#define GPIO_PG1_T4CCP1 0x00060407
#endif
#ifndef GPIO_PG2_I2C4SCL
#define GPIO_PG2_I2C4SCL 0x00060803
#endif
#ifndef GPIO_PG2_M0FAULT1
#define GPIO_PG2_M0FAULT1 0x00060804
#endif
#ifndef GPIO_PG2_M1PWM0
#define GPIO_PG2_M1PWM0 0x00060805
#endif
#ifndef GPIO_PG2_T5CCP0
#define GPIO_PG2_T5CCP0 0x00060807
#endif
#ifndef GPIO_PG3_I2C4SDA
#define GPIO_PG3_I2C4SDA 0x00060C03
#endif
#ifndef GPIO_PG3_M0FAULT2
#define GPIO_PG3_M0FAULT2 0x00060C04
#endif
#ifndef GPIO_PG3_M1PWM1
#define GPIO_PG3_M1PWM1 0x00060C05
#endif
#ifndef GPIO_PG3_PHA1
#define GPIO_PG3_PHA1 0x00060C06
#endif
#ifndef GPIO_PG3_T5CCP1
#define GPIO_PG3_T5CCP1 0x00060C07
#endif
#ifndef GPIO_PG4_U2RX
#define GPIO_PG4_U2RX 0x00061001
#endif
#ifndef GPIO_PG4_I2C1SCL
#define GPIO_PG4_I2C1SCL 0x00061003
#endif
#ifndef GPIO_PG4_M0PWM4
#define GPIO_PG4_M0PWM4 0x00061004
#endif
#ifndef GPIO_PG4_M1PWM2
#define GPIO_PG4_M1PWM2 0x00061005
#endif
#ifndef GPIO_PG4_PHB1
#define GPIO_PG4_PHB1 0x00061006
#endif
#ifndef GPIO_PG4_WT0CCP0
#define GPIO_PG4_WT0CCP0 0x00061007
#endif
#ifndef GPIO_PG4_USB0EPEN
#define GPIO_PG4_USB0EPEN 0x00061008
#endif
#ifndef GPIO_PG5_U2TX
#define GPIO_PG5_U2TX 0x00061401
#endif
#ifndef GPIO_PG5_I2C1SDA
#define GPIO_PG5_I2C1SDA 0x00061403
#endif
#ifndef GPIO_PG5_M0PWM5
#define GPIO_PG5_M0PWM5 0x00061404
#endif
#ifndef GPIO_PG5_M1PWM3
#define GPIO_PG5_M1PWM3 0x00061405
#endif
#ifndef GPIO_PG5_IDX1
#define GPIO_PG5_IDX1 0x00061406
#endif
#ifndef GPIO_PG5_WT0CCP1
#define GPIO_PG5_WT0CCP1 0x00061407
#endif
#ifndef GPIO_PG5_USB0PFLT
#define GPIO_PG5_USB0PFLT 0x00061408
#endif
#ifndef GPIO_PG6_I2C5SCL
#define GPIO_PG6_I2C5SCL 0x00061803
#endif
#ifndef GPIO_PG6_M0PWM6
#define GPIO_PG6_M0PWM6 0x00061804
#endif
#ifndef GPIO_PG6_WT1CCP0
#define GPIO_PG6_WT1CCP0 0x00061807
#endif
#ifndef GPIO_PG7_I2C5SDA
#define GPIO_PG7_I2C5SDA 0x00061C03
#endif
#ifndef GPIO_PG7_M0PWM7
#define GPIO_PG7_M0PWM7 0x00061C04
#endif
#ifndef GPIO_PG7_IDX1
#define GPIO_PG7_IDX1 0x00061C05
#endif
#ifndef GPIO_PG7_WT1CCP1
#define GPIO_PG7_WT1CCP1 0x00061C07
#endif
#ifndef GPIO_PH0_SSI3CLK
#define GPIO_PH0_SSI3CLK 0x00070002
#endif
#ifndef GPIO_PH0_M0PWM0
#define GPIO_PH0_M0PWM0 0x00070004
#endif
#ifndef GPIO_PH0_M0FAULT0
#define GPIO_PH0_M0FAULT0 0x00070006
#endif
#ifndef GPIO_PH0_WT2CCP0
#define GPIO_PH0_WT2CCP0 0x00070007
#endif
#ifndef GPIO_PH1_SSI3FSS
#define GPIO_PH1_SSI3FSS 0x00070402
#endif
#ifndef GPIO_PH1_M0PWM1
#define GPIO_PH1_M0PWM1 0x00070404
#endif
#ifndef GPIO_PH1_IDX0
#define GPIO_PH1_IDX0 0x00070405
#endif
#ifndef GPIO_PH1_M0FAULT1
#define GPIO_PH1_M0FAULT1 0x00070406
#endif
#ifndef GPIO_PH1_WT2CCP1
#define GPIO_PH1_WT2CCP1 0x00070407
#endif
#ifndef GPIO_PH2_SSI3RX
#define GPIO_PH2_SSI3RX 0x00070802
#endif
#ifndef GPIO_PH2_M0PWM2
#define GPIO_PH2_M0PWM2 0x00070804
#endif
#ifndef GPIO_PH2_M0FAULT2
#define GPIO_PH2_M0FAULT2 0x00070806
#endif
#ifndef GPIO_PH2_WT5CCP0
#define GPIO_PH2_WT5CCP0 0x00070807
#endif
#ifndef GPIO_PH3_SSI3TX
#define GPIO_PH3_SSI3TX 0x00070C02
#endif
#ifndef GPIO_PH3_M0PWM3
#define GPIO_PH3_M0PWM3 0x00070C04
#endif
#ifndef GPIO_PH3_M0FAULT3
#define GPIO_PH3_M0FAULT3 0x00070C06
#endif
#ifndef GPIO_PH3_WT5CCP1
#define GPIO_PH3_WT5CCP1 0x00070C07
#endif
#ifndef GPIO_PH4_SSI2CLK
#define GPIO_PH4_SSI2CLK 0x00071002
#endif
#ifndef GPIO_PH4_M0PWM4
#define GPIO_PH4_M0PWM4 0x00071004
#endif
#ifndef GPIO_PH4_PHA0
#define GPIO_PH4_PHA0 0x00071005
#endif
#ifndef GPIO_PH4_WT3CCP0
#define GPIO_PH4_WT3CCP0 0x00071007
#endif
#ifndef GPIO_PH5_SSI2FSS
#define GPIO_PH5_SSI2FSS 0x00071402
#endif
#ifndef GPIO_PH5_M0PWM5
#define GPIO_PH5_M0PWM5 0x00071404
#endif
#ifndef GPIO_PH5_PHB0
#define GPIO_PH5_PHB0 0x00071405
#endif
#ifndef GPIO_PH5_WT3CCP1
#define GPIO_PH5_WT3CCP1 0x00071407
#endif
#ifndef GPIO_PH6_SSI2RX
#define GPIO_PH6_SSI2RX 0x00071802
#endif
#ifndef GPIO_PH6_M0PWM6
#define GPIO_PH6_M0PWM6 0x00071804
#endif
#ifndef GPIO_PH6_WT4CCP0
#define GPIO_PH6_WT4CCP0 0x00071807
#endif
#ifndef GPIO_PH7_SSI2TX
#define GPIO_PH7_SSI2TX 0x00071C02
#endif
#ifndef GPIO_PH7_M0PWM7
#define GPIO_PH7_M0PWM7 0x00071C04
#endif
#ifndef GPIO_PH7_WT4CCP1
#define GPIO_PH7_WT4CCP1 0x00071C07
#endif
#ifndef GPIO_PJ0_U4RX
#define GPIO_PJ0_U4RX 0x00080001
#endif
#ifndef GPIO_PJ0_T1CCP0
#define GPIO_PJ0_T1CCP0 0x00080007
#endif
#ifndef GPIO_PJ1_U4TX
#define GPIO_PJ1_U4TX 0x00080401
#endif
#ifndef GPIO_PJ1_T1CCP1
#define GPIO_PJ1_T1CCP1 0x00080407
#endif
#ifndef GPIO_PJ2_U5RX
#define GPIO_PJ2_U5RX 0x00080801
#endif
#ifndef GPIO_PJ2_IDX0
#define GPIO_PJ2_IDX0 0x00080805
#endif
#ifndef GPIO_PJ2_T2CCP0
#define GPIO_PJ2_T2CCP0 0x00080807
#endif
#ifndef GPIO_PJ3_U5TX
#define GPIO_PJ3_U5TX 0x00080C01
#endif
#ifndef GPIO_PJ3_T2CCP1
#define GPIO_PJ3_T2CCP1 0x00080C07
#endif
#ifndef GPIO_PJ4_U6RX
#define GPIO_PJ4_U6RX 0x00081001
#endif
#ifndef GPIO_PJ4_T3CCP0
#define GPIO_PJ4_T3CCP0 0x00081007
#endif
#ifndef GPIO_PJ5_U6TX
#define GPIO_PJ5_U6TX 0x00081401
#endif
#ifndef GPIO_PJ5_T3CCP1
#define GPIO_PJ5_T3CCP1 0x00081407
#endif
#ifndef GPIO_PK0_SSI3CLK
#define GPIO_PK0_SSI3CLK 0x00090002
#endif
#ifndef GPIO_PK0_M1FAULT0
#define GPIO_PK0_M1FAULT0 0x00090006
#endif
#ifndef GPIO_PK1_SSI3FSS
#define GPIO_PK1_SSI3FSS 0x00090402
#endif
#ifndef GPIO_PK1_M1FAULT1
#define GPIO_PK1_M1FAULT1 0x00090406
#endif
#ifndef GPIO_PK2_SSI3RX
#define GPIO_PK2_SSI3RX 0x00090802
#endif
#ifndef GPIO_PK2_M1FAULT2
#define GPIO_PK2_M1FAULT2 0x00090806
#endif
#ifndef GPIO_PK3_SSI3TX
#define GPIO_PK3_SSI3TX 0x00090C02
#endif
#ifndef GPIO_PK3_M1FAULT3
#define GPIO_PK3_M1FAULT3 0x00090C06
#endif
#ifndef GPIO_PK4_U7RX
#define GPIO_PK4_U7RX 0x00091001
#endif
#ifndef GPIO_PK4_M0FAULT0
#define GPIO_PK4_M0FAULT0 0x00091006
#endif
#ifndef GPIO_PK4_RTCCLK
#define GPIO_PK4_RTCCLK 0x00091007
#endif
#ifndef GPIO_PK4_C0O
#define GPIO_PK4_C0O 0x00091008
#endif
#ifndef GPIO_PK5_U7TX
#define GPIO_PK5_U7TX 0x00091401
#endif
#ifndef GPIO_PK5_M0FAULT1
#define GPIO_PK5_M0FAULT1 0x00091406
#endif
#ifndef GPIO_PK5_C1O
#define GPIO_PK5_C1O 0x00091408
#endif
#ifndef GPIO_PK6_M0FAULT2
#define GPIO_PK6_M0FAULT2 0x00091806
#endif
#ifndef GPIO_PK6_WT1CCP0
#define GPIO_PK6_WT1CCP0 0x00091807
#endif
#ifndef GPIO_PK6_C2O
#define GPIO_PK6_C2O 0x00091808
#endif
#ifndef GPIO_PK7_M0FAULT3
#define GPIO_PK7_M0FAULT3 0x00091C06
#endif
#ifndef GPIO_PK7_WT1CCP1
#define GPIO_PK7_WT1CCP1 0x00091C07
#endif
#ifndef GPIO_PL0_T0CCP0
#define GPIO_PL0_T0CCP0 0x000A0007
#endif
#ifndef GPIO_PL0_WT0CCP0
#define GPIO_PL0_WT0CCP0 0x000A0008
#endif
#ifndef GPIO_PL1_T0CCP1
#define GPIO_PL1_T0CCP1 0x000A0407
#endif
#ifndef GPIO_PL1_WT0CCP1
#define GPIO_PL1_WT0CCP1 0x000A0408
#endif
#ifndef GPIO_PL2_T1CCP0
#define GPIO_PL2_T1CCP0 0x000A0807
#endif
#ifndef GPIO_PL2_WT1CCP0
#define GPIO_PL2_WT1CCP0 0x000A0808
#endif
#ifndef GPIO_PL3_T1CCP1
#define GPIO_PL3_T1CCP1 0x000A0C07
#endif
#ifndef GPIO_PL3_WT1CCP1
#define GPIO_PL3_WT1CCP1 0x000A0C08
#endif
#ifndef GPIO_PL4_T2CCP0
#define GPIO_PL4_T2CCP0 0x000A1007
#endif
#ifndef GPIO_PL4_WT2CCP0
#define GPIO_PL4_WT2CCP0 0x000A1008
#endif
#ifndef GPIO_PL5_T2CCP1
#define GPIO_PL5_T2CCP1 0x000A1407
#endif
#ifndef GPIO_PL5_WT2CCP1
#define GPIO_PL5_WT2CCP1 0x000A1408
#endif
#ifndef GPIO_PL6_T3CCP0
#define GPIO_PL6_T3CCP0 0x000A1807
#endif
#ifndef GPIO_PL6_WT3CCP0
#define GPIO_PL6_WT3CCP0 0x000A1808
#endif
#ifndef GPIO_PL7_T3CCP1
#define GPIO_PL7_T3CCP1 0x000A1C07
#endif
#ifndef GPIO_PL7_WT3CCP1
#define GPIO_PL7_WT3CCP1 0x000A1C08
#endif
#ifndef GPIO_PM0_T4CCP0
#define GPIO_PM0_T4CCP0 0x000B0007
#endif
#ifndef GPIO_PM0_WT4CCP0
#define GPIO_PM0_WT4CCP0 0x000B0008
#endif
#ifndef GPIO_PM1_T4CCP1
#define GPIO_PM1_T4CCP1 0x000B0407
#endif
#ifndef GPIO_PM1_WT4CCP1
#define GPIO_PM1_WT4CCP1 0x000B0408
#endif
#ifndef GPIO_PM2_T5CCP0
#define GPIO_PM2_T5CCP0 0x000B0807
#endif
#ifndef GPIO_PM2_WT5CCP0
#define GPIO_PM2_WT5CCP0 0x000B0808
#endif
#ifndef GPIO_PM3_T5CCP1
#define GPIO_PM3_T5CCP1 0x000B0C07
#endif
#ifndef GPIO_PM3_WT5CCP1
#define GPIO_PM3_WT5CCP1 0x000B0C08
#endif
#ifndef GPIO_PM6_M0PWM4
#define GPIO_PM6_M0PWM4 0x000B1802
#endif
#ifndef GPIO_PM6_WT0CCP0
#define GPIO_PM6_WT0CCP0 0x000B1807
#endif
#ifndef GPIO_PM7_M0PWM5
#define GPIO_PM7_M0PWM5 0x000B1C02
#endif
#ifndef GPIO_PM7_WT0CCP1
#define GPIO_PM7_WT0CCP1 0x000B1C07
#endif
#ifndef GPIO_PN0_CAN0RX
#define GPIO_PN0_CAN0RX 0x000C0001
#endif
#ifndef GPIO_PN1_CAN0TX
#define GPIO_PN1_CAN0TX 0x000C0401
#endif
#ifndef GPIO_PN2_M0PWM6
#define GPIO_PN2_M0PWM6 0x000C0802
#endif
#ifndef GPIO_PN2_WT2CCP0
#define GPIO_PN2_WT2CCP0 0x000C0807
#endif
#ifndef GPIO_PN3_M0PWM7
#define GPIO_PN3_M0PWM7 0x000C0C02
#endif
#ifndef GPIO_PN3_WT2CCP1
#define GPIO_PN3_WT2CCP1 0x000C0C07
#endif
#ifndef GPIO_PN4_M1PWM4
#define GPIO_PN4_M1PWM4 0x000C1002
#endif
#ifndef GPIO_PN4_WT3CCP0
#define GPIO_PN4_WT3CCP0 0x000C1007
#endif
#ifndef GPIO_PN5_M1PWM5
#define GPIO_PN5_M1PWM5 0x000C1402
#endif
#ifndef GPIO_PN5_WT3CCP1
#define GPIO_PN5_WT3CCP1 0x000C1407
#endif
#ifndef GPIO_PN6_M1PWM6
#define GPIO_PN6_M1PWM6 0x000C1802
#endif
#ifndef GPIO_PN6_WT4CCP0
#define GPIO_PN6_WT4CCP0 0x000C1807
#endif
#ifndef GPIO_PN7_M1PWM7
#define GPIO_PN7_M1PWM7 0x000C1C02
#endif
#ifndef GPIO_PN7_WT4CCP1
#define GPIO_PN7_WT4CCP1 0x000C1C07
#endif
#ifndef GPIO_PP0_M0PWM0
#define GPIO_PP0_M0PWM0 0x000D0001
#endif
#ifndef GPIO_PP0_T4CCP0
#define GPIO_PP0_T4CCP0 0x000D0007
#endif
#ifndef GPIO_PP1_M0PWM1
#define GPIO_PP1_M0PWM1 0x000D0401
#endif
#ifndef GPIO_PP1_T4CCP1
#define GPIO_PP1_T4CCP1 0x000D0407
#endif
#ifndef GPIO_PP2_M0PWM2
#define GPIO_PP2_M0PWM2 0x000D0801
#endif
#ifndef GPIO_PP2_T5CCP0
#define GPIO_PP2_T5CCP0 0x000D0807
#endif
#ifndef GPIO_PP3_M0PWM3
#define GPIO_PP3_M0PWM3 0x000D0C01
#endif
#ifndef GPIO_PP3_T5CCP1
#define GPIO_PP3_T5CCP1 0x000D0C07
#endif
#ifndef GPIO_PP4_M0PWM4
#define GPIO_PP4_M0PWM4 0x000D1001
#endif
#ifndef GPIO_PP4_WT0CCP0
#define GPIO_PP4_WT0CCP0 0x000D1007
#endif
#ifndef GPIO_PP5_M0PWM5
#define GPIO_PP5_M0PWM5 0x000D1401
#endif
#ifndef GPIO_PP5_WT0CCP1
#define GPIO_PP5_WT0CCP1 0x000D1407
#endif
#ifndef GPIO_PP6_M0PWM6
#define GPIO_PP6_M0PWM6 0x000D1801
#endif
#ifndef GPIO_PP6_WT1CCP0
#define GPIO_PP6_WT1CCP0 0x000D1807
#endif
#ifndef GPIO_PP7_M0PWM7
#define GPIO_PP7_M0PWM7 0x000D1C01
#endif
#ifndef GPIO_PP7_WT1CCP1
#define GPIO_PP7_WT1CCP1 0x000D1C07
#endif
#ifndef GPIO_PQ0_M1PWM0
#define GPIO_PQ0_M1PWM0 0x000E0001
#endif
#ifndef GPIO_PQ0_WT2CCP0
#define GPIO_PQ0_WT2CCP0 0x000E0007
#endif
#ifndef GPIO_PQ1_M1PWM1
#define GPIO_PQ1_M1PWM1 0x000E0401
#endif
#ifndef GPIO_PQ1_WT2CCP1
#define GPIO_PQ1_WT2CCP1 0x000E0407
#endif
#ifndef GPIO_PQ2_M1PWM2
#define GPIO_PQ2_M1PWM2 0x000E0801
#endif
#ifndef GPIO_PQ2_WT3CCP0
#define GPIO_PQ2_WT3CCP0 0x000E0807
#endif
#ifndef GPIO_PQ3_M1PWM3
#define GPIO_PQ3_M1PWM3 0x000E0C01
#endif
#ifndef GPIO_PQ3_WT3CCP1
#define GPIO_PQ3_WT3CCP1 0x000E0C07
#endif
#ifndef GPIO_PQ4_M1PWM4
#define GPIO_PQ4_M1PWM4 0x000E1001
#endif
#ifndef GPIO_PQ4_WT4CCP0
#define GPIO_PQ4_WT4CCP0 0x000E1007
#endif
#ifndef GPIO_PQ5_M1PWM5
#define GPIO_PQ5_M1PWM5 0x000E1401
#endif
#ifndef GPIO_PQ5_WT4CCP1
#define GPIO_PQ5_WT4CCP1 0x000E1407
#endif
#ifndef GPIO_PQ6_M1PWM6
#define GPIO_PQ6_M1PWM6 0x000E1801
#endif
#ifndef GPIO_PQ6_WT5CCP0
#define GPIO_PQ6_WT5CCP0 0x000E1807
#endif
#ifndef GPIO_PQ7_M1PWM7
#define GPIO_PQ7_M1PWM7 0x000E1C01
#endif
#ifndef GPIO_PQ7_WT5CCP1
#define GPIO_PQ7_WT5CCP1 0x000E1C07
#endif
