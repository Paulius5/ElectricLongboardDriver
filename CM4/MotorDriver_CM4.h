#include "sys_cm4.h"

typedef struct {
  uint32_t RTSR1;
  uint32_t FTSR1;
  uint32_t SWIER1;
  uint32_t D3PMR1;
  uint32_t D3PCR1L;
  uint32_t D3PCR1H;
  uint32_t RESERVED0[2];
  uint32_t RTSR2;
  uint32_t FTSR2;
  uint32_t SWIER2;
  uint32_t D3PMR2;
  uint32_t D3PCR2L;
  uint32_t D3PCR2H;
  uint32_t RESERVED1[2];
  uint32_t RTSR3;
  uint32_t FTSR3;
  uint32_t SWIER3;
  uint32_t D3PMR3;
  uint32_t D3PCR3L;
  uint32_t D3PCR3H;
  uint32_t RESERVED2[9];
  uint32_t C1IMR1;
  uint32_t C1EMR1;
  uint32_t C1PR1;
  uint32_t RESERVED3;
  uint32_t C1IMR2;
  uint32_t C1EMR2;
  uint32_t C1PR2;
  uint32_t RESERVED4;
  uint32_t C1IMR3;
  uint32_t C1EMR3;
  uint32_t C1PR3;
  uint32_t RESERVED5[4];
  uint32_t C2IMR1;
  uint32_t C2EMR1;
  uint32_t C2PR1;
  uint32_t RESERVED6;
  uint32_t C2IMR2;
  uint32_t C2EMR2;
  uint32_t C2PR2;
  uint32_t RESERVED7;
  uint32_t C2IMR3;
  uint32_t C2EMR3;
  uint32_t C2PR3;
} EXTI_TypeDef;

typedef struct {
  uint32_t CR1;           //0x00
  uint32_t CR2;           //0x04
  uint32_t SMCR;          //0x08
  uint32_t DIER;          //0x0C
  uint32_t SR;            //0x10
  uint32_t EGR;           //0x14
  uint32_t CCMR1;         //0x18
  uint32_t CCMR2;         //0x1C
  uint32_t CCER;          //0x20
  uint32_t CNT;           //0x24
  uint32_t PSC;           //0x28
  uint32_t ARR;           //0x2C
  uint32_t RCR;           //0x30
  uint32_t CCR1;          //0x34
  uint32_t CCR2;          //0x38
  uint32_t CCR3;          //0x3C
  uint32_t CCR4;          //0x40
  uint32_t RESERVED0;     //0x44
  uint32_t DCR;           //0x48
  uint32_t DMAR;          //0x4C
  uint32_t RESERVED1[4];  //0x50
  uint32_t AF1;           //0x60
  uint32_t RESERVED2;     //0x64
  uint32_t TISEL;         //0x68
} HALL_TimerTypeDef;

typedef struct {
  uint32_t CR1;       //0x00
  uint32_t CR2;       //0x04
  uint32_t SMCR;      //0x08
  uint32_t DIER;      //0x0C
  uint32_t SR;        //0x10
  uint32_t EGR;       //0x14
  uint32_t CCMR1;     //0x18
  uint32_t CCMR2;     //0x1C
  uint32_t CCER;      //0x20
  uint32_t CNT;       //0x24
  uint32_t PSC;       //0x28
  uint32_t ARR;       //0x2C
  uint32_t RCR;       //0x30
  uint32_t CCR1;      //0x34
  uint32_t CCR2;      //0x38
  uint32_t CCR3;      //0x3C
  uint32_t CCR4;      //0x40
  uint32_t BDTR;      //0x44
  uint32_t DCR;       //0x48
  uint32_t DMAR;      //0x4C
  uint32_t RESERVED;  //0x50
  uint32_t CCMR3;     //0x54
  uint32_t CCR5;      //0x58
  uint32_t CCR6;      //0x5C
  uint32_t AF1;       //0x60
  uint32_t AF2;       //0x64
  uint32_t TISEL;     //0x68
} PWM_TimerTypeDef;


typedef struct {
  uint32_t ISR;
  uint32_t IER;
  uint32_t CR;
  uint32_t CFGR;
  uint32_t CFGR2;
  uint32_t SMPR1;
  uint32_t SMPR2;
  uint32_t PCSEL;
  uint32_t LTR1;
  uint32_t HTR1;
  uint32_t RESERVED0[2];
  uint32_t SQR1;
  uint32_t SQR2;
  uint32_t SQR3;
  uint32_t SQR4;
  uint32_t DR;
  uint32_t JSQR;
  uint32_t RESERVED1[4];
  uint32_t OFR1;
  uint32_t OFR2;
  uint32_t OFR3;
  uint32_t OFR4;
  uint32_t RESERVED2[4];
  uint32_t JDR1;
  uint32_t JDR2;
  uint32_t JDR3;
  uint32_t JDR4;
  uint32_t RESERVED3[4];
  uint32_t AWD2CR;
  uint32_t AWD3CR;
  uint32_t RESERVED4[2];
  uint32_t LTR2;
  uint32_t HTR2;
  uint32_t LTR3;
  uint32_t HTR3;
  uint32_t DIFSEL;
  uint32_t CALFACT;
  uint32_t CALFACT2;
} ADC_TypeDef;

typedef struct {
  uint32_t CSR;
  uint32_t RESERVED0;
  uint32_t CCR;
  uint32_t CDR;
  uint32_t CDR2;
} ADC_CommonTypeDef;



typedef struct
{
  uint8_t HALL1_Port;
  uint8_t HALL1_Pin;
  uint8_t HALL2_Port;
  uint8_t HALL2_Pin;
  uint8_t HALL3_Port;
  uint8_t HALL3_Pin;
} HallSensor_InitTypeDef;

typedef struct
{
  float CurrentVal;
  float P_Coeff;
  float I_Coeff;
  float D_coeff;
} HALL_PID_TypeDef;

typedef struct
{
  bool HALL_Val[3];
  uint8_t HALL_Pos;
  uint32_t ElapsedTime;
  bool Hall_Enabled;
  
} HallSensor_RuntimeTypeDef;

typedef struct
{
    HallSensor_InitTypeDef HallSensor_Init;
} MotorDriver_InitTypeDef;

typedef struct 
{
  HALL_TimerTypeDef *HallTimer;
  PWM_TimerTypeDef *PWMTimer;
  ADC_TypeDef *ADC1;
  ADC_CommonTypeDef *ADC_Common;
  ADC_TypeDef *ADC2;
  ADC_CommonTypeDef *ADC2_Common;
  EXTI_TypeDef *EXTI;
} MotorRegs_TypeDef;




typedef struct
{
  MotorRegs_TypeDef PeriphRegs;
  MotorDriver_InitTypeDef Init;

  
  HallSensor_RuntimeTypeDef HallSensor_RuntimeStruct;

    

} MotorHandlerTypeDef;

