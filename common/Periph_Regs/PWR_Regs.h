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
    uint32_t CR1;
    uint32_t CSR1;
    uint32_t CR2;
    uint32_t CR3;
    uint32_t CPU1CR;
    uint32_t CPU2CR;
    uint32_t D3CR;
    uint32_t WKUPCR;
    uint32_t WKUPFR;
    uint32_t WKUPEPR;
} PWR_TypeDef;