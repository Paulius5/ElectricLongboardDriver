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
    uint32_t CR;
    uint32_t DIN;
    uint32_t STR;
    uint32_t HRA[5];
    uint32_t IMR;
    uint32_t SR;
    uint32_t RESERVED0[52];
    uint32_t CSR[54];
    uint32_t RESERVED1[80];
    uint32_t HR[8];
} HASH_TypeDef;