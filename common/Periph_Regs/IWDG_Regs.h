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
    uint32_t KR;
    uint32_t PR;
    uint32_t RLR;
    uint32_t SR;
    uint32_t WINR;
} IWDG_TypeDef;