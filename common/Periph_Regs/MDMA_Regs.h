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
    uint32_t ISR;   
    uint32_t IFCR;  
    uint32_t ESR;   
    uint32_t CR;    
    uint32_t TCR;   
    uint32_t BNDTR; 
    uint32_t SAR;   
    uint32_t DAR;   
    uint32_t BRUR;  
    uint32_t LAR;   
    uint32_t TBR;   
    uint32_t RESERVED0;  
    uint32_t MAR;   
    uint32_t MDR;   
    uint32_t RESERVED1[2]; 
} __MDMA_Channel_TypeDef;

typedef struct {
    uint32_t GISR0;
    uint32_t RESERVED[15];
    __MDMA_Channel_TypeDef Channel[16];
} MDMA_TypeDef;