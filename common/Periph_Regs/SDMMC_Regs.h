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
    uint32_t POWER;
    uint32_t CLKCR;
    uint32_t ARGR;
    uint32_t CMDR;
    uint32_t RESPCMDR;
    uint32_t RESPR[4];
    uint32_t DTIMER;
    uint32_t DLENR;
    uint32_t DCTRLR;
    uint32_t DCNTR;
    uint32_t STAR;
    uint32_t ICR;
    uint32_t MASKR;
    uint32_t ACKTIMER;
    uint32_t RESERVED0[3];
    uint32_t IDMACTRLR;
    uint32_t IDMABSIZER;
    uint32_t IDMABASER[2];
    uint32_t RESERVED1[8];
    uint32_t FIFOR[16];
} SDMMC_TypeDef;