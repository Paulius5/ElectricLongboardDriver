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
  uint32_t IER;
  uint32_t ICR;
  uint32_t ISR;
  uint32_t MISR;
} __HSEM_Cn_TypeDef;
  
typedef struct {
    uint32_t HSEM_R[32];
    uint32_t HSEM_RLR[32];
    __HSEM_Cn_TypeDef C[2];
    uint32_t RESERVED0[9];
    uint32_t CR;
    uint32_t KEYR;
} HSEM_TypeDef;