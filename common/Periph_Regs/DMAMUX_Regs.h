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
} __DMAMUX_Channel_TypeDef;

typedef struct {
    __DMAMUX_Channel_TypeDef Channel[16];
    uint32_t RESERVED0[16];
    uint32_t CSR;
    uint32_t CFR;
    uint32_t RESERVED1[30];
    __DMAMUX_Channel_TypeDef RG[4];
    uint32_t RGSR;
    uint32_t RGCFR;
} DMAMUX_TypeDef;