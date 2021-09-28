#ifdef _MSC_VER
#include "..\Temp_Defines\Temp_Defines.h"
#endif
#ifdef ARMCM7
#include "..\Include\core_cm7.h"
#endif
#ifdef ARMCM4
#include "..\Include\core_cm4.h"
#endif

typedef enum {

} ___VREF_VRS_Enum;

typedef struct {
    union {
        uint32_t CSR;
        struct _CSR {
            bool ENVR : 1;
            bool HIZ : 1;
            int : 1;
            bool VRR : 1;
            ___VREF_VRS_Enum : 3;
            int : 25;
        } _CSR;
    };
    uint32_t CCR;
} VREF_TypeDef;