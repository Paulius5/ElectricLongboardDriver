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
    uint32_t RESERVED0[2];
    uint32_t SSCR;
    uint32_t BPCR;
    uint32_t AWCR;
    uint32_t TWCR;
    uint32_t GCR;
    uint32_t SRCR;
    uint32_t BCCR;
    uint32_t IER;
    uint32_t ISR;
    uint32_t ICR;
    uint32_t LIPCR;
    uint32_t CPSR;
    uint32_t CDSR;
    uint32_t L1CR;
    uint32_t L1WHPCR;
    uint32_t L1WVPCR;
    uint32_t L1CKCR;
    uint32_t L1PFCR;
    uint32_t L1CACR;
    uint32_t L1DCCR;
    uint32_t L1BFCR;
    uint32_t L1CFBAR;
    uint32_t L1CFBLR;
    uint32_t L1CFBLNR;
    uint32_t L1CLUTWR;
    uint32_t L2CR;
    uint32_t L2WHPCR;
    uint32_t L2WVPCR;
    uint32_t L2CKCR;
    uint32_t L2PFCR;
    uint32_t L2CACR;
    uint32_t L2DCCR;
    uint32_t L2BFCR;
    uint32_t L2CFBAR;
    uint32_t L2CFBLR;
    uint32_t L2CFBLNR;
    uint32_t L2CLUTWR;
    
} LTDC_TypeDef;