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
    uint32_t RESERVED0;
    uint32_t PMCR;
    uint32_t EXTICR[4];
    uint32_t CFGR;
    uint32_t CCSR;
    uint32_t CCVR;
    uint32_t CCCR;
    uint32_t PWRCR;
    uint32_t RESERVED1[60];
    uint32_t PKGR;
    uint32_t RESERVED2[111];
    uint32_t UR[18];
} SYSCFG_TypeDef;