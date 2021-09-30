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
    uint32_t WRFR;
    uint32_t CWRFR;
    uint32_t RDFR;
    uint32_t CRDFR;
    uint32_t SR;
    uint32_t CLRFR;
    uint32_t RESERVED[57];
    uint32_t DINR[32];
    uint32_t DOUTR[32];
} MDIOS_TypeDef;