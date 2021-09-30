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
    uint32_t CSR;
    uint32_t OTR;
    uint32_t HSOTR;
} _OPAMP_CH_TypeDef;

typedef struct {
    _OPAMP_CH_TypeDef CH1;
    uint32_t OR;
    _OPAMP_CH_TypeDef CH2;
} OPAMP_TypeDef;