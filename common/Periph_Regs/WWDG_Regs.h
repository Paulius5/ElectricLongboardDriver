#ifdef _MSC_VER
#include "..\Temp_Defines\Temp_Defines.h"
#endif
#ifdef ARMCM7
#include "..\Include\core_cm7.h"
#endif
#ifdef ARMCM4
#include "..\Include\core_cm4.h"
#endif

/* ONLY WORD (32-BIT) OR HALF WORD (16-BIT) ACCESS */

typedef struct {
    uint32_t CR;
    uint32_t CFR;
    uint32_t SR;
} WWDG_TypeDef;