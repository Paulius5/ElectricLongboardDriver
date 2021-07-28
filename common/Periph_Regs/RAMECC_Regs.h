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
    RAMECC_GLOBAL_INTERRUPT_DISABLE,
    RAMECC_GLOBAL_INTERRUPT_ENABLE
} ___RAMECC_GIE_Enum;

typedef enum {
    RAMECC_SINGLE_ERROR_INTERRUPT_DISABLE,
    RAMECC_SINGLE_ERROR_INTERRUPT_ENABLE
} ___RAMECC_ECCSEIE_Enum;

typedef enum {
    RAMECC_DOUBLE_ERROR_INTERRUPT_DISABLE,
    RAMECC_DOUBLE_ERROR_INTERRUPT_ENABLE
} ___RAMECC_ECCDEIE_Enum;

typedef enum {
    RAMECC_DOUBLE_ERROR_ON_BYTE_WRITE_INTERRUPT_DISABLE,
    RAMECC_DOUBLE_ERROR_ON_BYTE_WRITE_INTERRUPT_ENABLE
} ___RAMECC_ECCDEBWIE_Enum;

typedef enum {
    RAMECC_ERROR_LATCHING_DISABLE,
    RAMECC_ERROR_LATCHING_ENABLE
} ___RAMECC_ECCELEN_Enum;

typedef enum {
    RAMECC_NO_ERROR,
    RAMECC_ERROR_DETECTED
} ___RAMECC_EDF_Enum;

typedef struct {
    union {
        uint32_t SR;  //0x04
        struct _SR {
            ___RAMECC_EDF_Enum SEDCF : 1;
            ___RAMECC_EDF_Enum DEDF : 1;
            ___RAMECC_EDF_Enum DEBWDF : 1;
            int : 29;
        } _SR;
    };
    uint32_t FAR; //0x08
    uint32_t FDRL; //0x0C
    uint32_t FDRH; //0x10
    uint32_t FECR; //0x14
    uint32_t RESVD[2]; //0x18, 0x1C
    union {
        uint32_t CR; //0x20
        struct _CR {
            int : 2;
            ___RAMECC_ECCSEIE_Enum ECCSEIE : 1;
            ___RAMECC_ECCDEIE_Enum ECCDEIE : 1;
            ___RAMECC_ECCDEBWIE_Enum ECCDEBWIE : 1;
            ___RAMECC_ECCELEN_Enum ECCELEN : 1;
            int : 26;
        } _CR;
    };
} __RAMECC_M_TypeDef;

typedef struct { //0x400
    union {
        uint32_t IER; //0x00
        struct _IER {
            ___RAMECC_GIE_Enum GIE : 1;
            ___RAMECC_ECCSEIE_Enum GECCSEIE : 1;
            ___RAMECC_ECCDEIE_Enum GECCDEIE : 1;
            ___RAMECC_ECCDEBWIE_Enum GECCDEBWIE : 1;
            int : 28;
        } _IER;
    };
    __RAMECC_M_TypeDef M[31];
} RAMECC_TypeDef;