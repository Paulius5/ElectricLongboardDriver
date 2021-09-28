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
    uint32_t SR;
    uint32_t RIS;
    uint32_t IER;
    uint32_t MIS;
    uint32_t ICR;
    uint32_t ESCR;
    uint32_t ESUR;
    uint32_t CWSTRT;
    uint32_t CWSIZE;
    uint32_t DR;
} DCMI_TypeDef;