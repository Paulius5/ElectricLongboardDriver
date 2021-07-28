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
    uint32_t DR;
    uint32_t IDR;
    uint32_t CR;
    uint32_t INIT;
    uint32_t POL;
} CRC_TypeDef;