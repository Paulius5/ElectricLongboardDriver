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
    uint32_t CR;
    uint32_t ISR;
    uint32_t IFCR;
    uint32_t FGMAR;
    uint32_t FGOR;
    uint32_t BGMAR;
    uint32_t BGOR;
    uint32_t FGPFCCR;
    uint32_t FGCOLR;
    uint32_t BGPFCCR;
    uint32_t BGCOLR;
    uint32_t FGCMAR;
    uint32_t BGCMAR;
    uint32_t OPFCCR;
    uint32_t OCOLR;
    uint32_t OMAR;
    uint32_t OOR;
    uint32_t NLR;
    uint32_t LWR;
    uint32_t AMTCR;
    uint32_t RESERVED[236];
    uint32_t FGCLUT[256];
    uint32_t BGCLUT[256];
} DMA2D_TypeDef;