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
    uint32_t MODER;     //0x00
    uint32_t OTYPER;    //0x04
    uint32_t OSPEEDR;   //0x08
    uint32_t PUPDR;     //0x0C
    uint32_t IDR;       //0x10
    uint32_t ODR;       //0x14
    uint32_t BSRR;      //0x18
    uint32_t LCKR;      //0x1C
    uint32_t AFRL;      //0x20
    uint32_t AFRH;      //0x24
} GPIO_TypeDef;