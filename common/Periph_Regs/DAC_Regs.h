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
    uint32_t SWTRGR;
    uint32_t DHR12R1;
    uint32_t DHR12L1;
    uint32_t DHR8R1;
    uint32_t DHR12R2;
    uint32_t DHR12L2;
    uint32_t DHR8R2;
    uint32_t DHR12RD;
    uint32_t DHR12LD;
    uint32_t DHR8RD;
    uint32_t DOR1;
    uint32_t DOR2;
    uint32_t SR;
    uint32_t CCR;
    uint32_t MCR;
    uint32_t SHSR1;
    uint32_t SHSR2;
    uint32_t SHHR;
    uint32_t SHRR;
} DAC_TypeDef;