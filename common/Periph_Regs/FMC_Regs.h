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
    uint32_t BCR[4];
    uint32_t BTR[4];
    uint32_t BWTR[4];
    uint32_t PCR;
    uint32_t SR;
    uint32_t PMEM;
    uint32_t PATT;
    uint32_t ECCR;
    uint32_t SDCR[2];
    uint32_t SDTR[2];
    uint32_t SDCMR;
    uint32_t SDRTR;
    uint32_t SDSR;
} FMC_TypeDef;