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
    uint32_t ISR;
    uint32_t ICR;
    uint32_t IER;
    uint32_t CFGR;
    uint32_t CR;
    uint32_t CMP;
    uint32_t ARR;
    uint32_t CNT;
    uint32_t CFGR2;
} LPTIM_TypeDef;