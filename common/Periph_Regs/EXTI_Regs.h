#ifdef _MSC_VER
#include "..\Temp_Defines\Temp_Defines.h"
#endif
#ifdef ARMCM7
#include "..\Include\core_cm7.h"
#endif
#ifdef ARMCM4
#include "..\Include\core_cm4.h"
#endif

typedef struct {
    uint32_t RTSR;
    uint32_t FTSR;
    uint32_t SWIER;
    uint32_t D3PMR;
    uint32_t D3PCRL;
    uint32_t D3PCRH;
    uint32_t RESERVED[2];
} __EXTI_Regs_TypeDef;

typedef struct {
    uint32_t RESERVED;
    uint32_t IMR;
    uint32_t EMR;
    uint32_t PR;
} __EXTI_Mask_TypeDef;

typedef struct {
    uint32_t RESERVED[3];
    __EXTI_Mask_TypeDef Mask[3];
} __EXTI_Channel_TypeDef;

typedef struct {
  __EXTI_Regs_TypeDef Regs[3];
  uint32_t RESERVED[3];
  __EXTI_Channel_TypeDef Channel[2];
} EXTI_TypeDef;