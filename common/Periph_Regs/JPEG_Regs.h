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
    uint32_t CONFR[8];
    uint32_t RESERVED0[4];
    uint32_t CR;
    uint32_t SR;
    uint32_t CFR;
    uint32_t DIR;
    uint32_t DOR;
    uint32_t RESERVED1[2];
    uint32_t QMEM[4];
    uint32_t HUFFMIN;
    uint32_t HUFFBASE;
    uint32_t HUFFSYMB;
    uint32_t DHTMEM;
    uint32_t RESERVED2;
    uint32_t HUFFENC_AC[2];
    uint32_t HUFFENC_DC[2];
} JPEG_TypeDef;