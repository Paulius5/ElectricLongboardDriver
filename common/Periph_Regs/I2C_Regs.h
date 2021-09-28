#ifdef _MSC_VER
#include "..\Temp_Defines\Temp_Defines.h"
#endif
#ifdef ARMCM7
#include "..\Include\core_cm7.h"
#endif
#ifdef ARMCM4
#include "..\Include\core_cm4.h"
#endif

/* ONLY WORD (32-BIT) ACCESS */

typedef struct {
    uint32_t CR[2];
    uint32_t OAR[2];
    uint32_t TIMINGR;
    uint32_t TIMEOUTR;
    uint32_t ISR;
    uint32_t ICR;
    uint32_t PECR;
    uint32_t RXDR;
    uint32_t TXDR;
} I2C_TypeDef;