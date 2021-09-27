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
    union {
        uint32_t CTR;
        struct _CTR {
            bool EN : 1;
            int : 7;
            unsigned int PCACHEADDR : 12; //ONLY WORD ACCESS FOR RW
            int : 12; 
        } _CTR;
} ART_TypeDef;