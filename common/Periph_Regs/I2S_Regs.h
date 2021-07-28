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
    uint32_t CR;
    uint32_t RESERVED0[3];
    uint32_t IER;
    uint32_t SR;
    uint32_t IFCR;
    uint32_t TXDR;
    uint32_t RESERVED1[3];
    uint32_t RXDR;
    uint32_t RESERVED2[7];
    uint32_t CFGR;
} I2S_TypeDef;