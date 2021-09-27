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
    uint32_t SR;
    uint32_t DIN;
    uint32_t DOUT;
    uint32_t DMACR;
    uint32_t IMSCR;
    uint32_t RISR;
    uint32_t MISR;
    uint32_t K0LR;
    uint32_t K0RR;
    uint32_t K1LR;
    uint32_t K1RR;
    uint32_t K2LR;
    uint32_t K2RR;
    uint32_t K3LR;
    uint32_t K3RR;
    uint32_t IV0LR;
    uint32_t IV0RR;
    uint32_t IV1LR;
    uint32_t IV1RR;
    uint32_t CSGCMCCM0R;
    uint32_t CSGCMCCM1R;
    uint32_t CSGCMCCM2R;
    uint32_t CSGCMCCM3R;
    uint32_t CSGCMCCM4R;
    uint32_t CSGCMCCM5R;
    uint32_t CSGCMCCM6R;
    uint32_t CSGCMCCM7R;
    uint32_t CSGCM0R;
    uint32_t CSGCM1R;
    uint32_t CSGCM2R;
    uint32_t CSGCM3R;
    uint32_t CSGCM4R;
    uint32_t CSGCM5R;
    uint32_t CSGCM6R;
    uint32_t CSGCM7R;
} CRYPTO_TypeDef;