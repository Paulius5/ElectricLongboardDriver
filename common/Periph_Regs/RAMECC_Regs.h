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
    uint32_t SR;  //0x04
    uint32_t FAR; //0x08
    uint32_t FDRL; //0x0C
    uint32_t FDRH; //0x10
    uint32_t FECR; //0x14
    uint32_t RESVD[2]; //0x18, 0x1C
    uint32_t CR; //0x20
    };
} __RAMECC_M_TypeDef;

typedef struct { //0x400
    uint32_t IER; //0x00
    };
    __RAMECC_M_TypeDef M[31];
} RAMECC_TypeDef;