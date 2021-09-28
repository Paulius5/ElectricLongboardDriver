#ifdef _MSC_VER
#include "..\Temp_Defines\Temp_Defines.h"
#endif
#ifdef ARMCM7
#include "..\Include\core_cm7.h"
#endif
#ifdef ARMCM4
#include "..\Include\core_cm4.h"
#endif

/* ONLY WORD (32-BIT) OR HALF WORD (16-BIT) ACCESS FOR TIM1/TIM2/TIM3/TIM4/TIM5/TIM6/TIM7/TIM8/TIM16/TIM17 */

typedef struct {
  uint32_t CR[2];       //0x00
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
  uint32_t AF[2];       //0x60
  uint32_t TISEL;     //0x68
} Timer_TypeDef;