#ifdef _MSC_VER
#include "..\Temp_Defines\Temp_Defines.h"
#endif
#ifdef ARMCM7
#include "..\Include\core_cm7.h"
#endif
#ifdef ARMCM4
#include "..\Include\core_cm4.h"
#endif

/* ONLY WORD (32-BIT) ACCESS EXCEPT CH(y)DATINR */
typedef struct {
    uint32_t CFGR[2];
    uint32_t AWSCDR;
    uint32_t WDATR;
    uint32_t RESERVED[2];
} _DFSDM_CH_TypeDef;

typedef struct {
    uint32_t CR[2];
    uint32_t ISR;
    uint32_t ICR;
    uint32_t JCHGR;
    uint32_t FCR;
    uint32_t JDATAR;
    uint32_t RDATAR;
    uint32_t AWHTR;
    uint32_t AWLTR;
    uint32_t AWSR;
    uint32_t AWCFR;
    uint32_t EXMAX;
    uint32_t EXMIN;
    uint32_t CNVTIMR;
    uint32_t RESERVED[17];
} _DFSDM_FLT_TypeDef;


typedef struct {
    _DFSDM_CH_TypeDef CH[8];
    _DFSDM_FLT_TypeDef FLT[4];
} DFSDM_TypeDef;