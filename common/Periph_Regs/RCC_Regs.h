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
    uint32_t AHB3ENR;       //0x00
    uint32_t AHB1ENR;       //0x04
    uint32_t AHB2ENR;       //0x08
    uint32_t AHB4ENR;       //0x0C
    uint32_t APB3ENR;       //0x10
    uint32_t APB1LENR;      //0x14
    uint32_t APB1HENR;      //0x18
    uint32_t APB2ENR;       //0x1C
    uint32_t APB4ENR;       //0x20
} __RCC_ENR_TypeDef;

typedef struct {
    uint32_t CR;            //0x000
    uint32_t HSICFGR;       //0x004
    uint32_t CRRCR;         //0x008
    uint32_t CSICFGR;       //0x00C
    uint32_t CFGR;          //0x010
    uint32_t D1CFGR;        //0x014
    uint32_t D2CFGR;        //0x018
    uint32_t D3CFGR;        //0x020
    uint32_t RESERVED0;     //0x024
    uint32_t PLLCKSELR;     //0x028
    uint32_t PLLCFGR;       //0x02C
    uint32_t PLL1DIVR;      //0x030
    uint32_t PLL1FRACR;     //0x034
    uint32_t PLL2DIVR;      //0x038
    uint32_t PLL2FRACR;     //0x03C
    uint32_t PLL3DIVR;      //0x040
    uint32_t PLL3FRACR;     //0x044
    uint32_t RESERVED1;     //0x048
    uint32_t D1CCIPR;       //0x04C
    uint32_t D2CCIP1R;      //0x050
    uint32_t D2CCIP2R;      //0x054
    uint32_t D3CCIPR;       //0x058
    uint32_t RESERVED2;     //0x05C
    uint32_t CIER;          //0x060
    uint32_t CIFR;          //0x064
    uint32_t CICR;          //0x068
    uint32_t RESERVED3;     //0x06C
    uint32_t BDCR;          //0x070
    uint32_t CSR;           //0x074
    uint32_t RESERVED4;     //0x078
    uint32_t AHB3RSTR;      //0x07C
    uint32_t AHB1RSTR;      //0x080
    uint32_t AHB2RSTR;      //0x084
    uint32_t AHB4RSTR;      //0x088
    uint32_t APB3RSTR;      //0x08C
    uint32_t APB1LRSTR;     //0x090
    uint32_t APB1HRSTR;     //0x094
    uint32_t APB2RSTR;      //0x098
    uint32_t APB4RSTR;      //0x09C
    uint32_t GCR;           //0x0A0
    uint32_t RESERVED5;     //0x0A4
    uint32_t D3AMR;         //0x0A8
    uint32_t RESERVED6[8];  //0x0AC
    uint32_t RSR;           //0x0D0
    __RCC_ENR_TypeDef ENR;
    uint32_t RESERVED7;     //0x0F8
    __RCC_ENR_TypeDef LPENR;
    uint32_t RESERVED8[3];  //0x120
    uint32_t C1_RSR;        //0x130
    __RCC_ENR_TypeDef C1;
    uint32_t RESERVED9;
    __RCC_ENR_TypeDef C1_LP;
    uint32_t RESERVED10[3];
    uint32_t C2_RSR;        //0x130
    __RCC_ENR_TypeDef C2;
    uint32_t RESERVED11;
    __RCC_ENR_TypeDef C2_LP;
    uint32_t RESERVED12[3];
} RCC_TypeDef;