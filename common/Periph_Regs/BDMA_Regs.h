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
    uint32_t NDTR;
    uint32_t PAR;
    uint32_t M0AR;
    uint32_t M1AR;
} __BDMA_Channel_TypeDef;

typedef struct {
    uint32_t ISR;
    uint32_t IFCR;
    __BDMA_Channel_TypeDef Channel[8];
} BDMA_TypeDef;
