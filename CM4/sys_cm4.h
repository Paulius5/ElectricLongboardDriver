#ifndef uint32_t
#define uint32_t unsigned int
#define uint8_t unsigned char
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
} GPIOTypeDef;



typedef struct {
    uint32_t CR;
    uint32_t NDTR;
    uint32_t PAR;
    uint32_t M0AR;
    uint32_t M1AR;
    uint32_t FCR;
} DMA_StreamTypeDef;

typedef struct {
    uint32_t LISR;
    uint32_t HISR;
    uint32_t LIFCR;
    uint32_t HIFCR;
    DMA_StreamTypeDef Stream[8];
} DMA_TypeDef;


#define GPIOA ((GPIOTypeDef *)0x58020000);
#define GPIOB ((GPIOTypeDef *)0x58020400);
#define GPIOC ((GPIOTypeDef *)0x58020800);
#define GPIOD ((GPIOTypeDef *)0x58020C00);
#define GPIOE ((GPIOTypeDef *)0x58021000);
#define GPIOF ((GPIOTypeDef *)0x58021400);
#define GPIOG ((GPIOTypeDef *)0x58021800);
#define GPIOH ((GPIOTypeDef *)0x58021C00);
#define GPIOI ((GPIOTypeDef *)0x58022000);
#define GPIOJ ((GPIOTypeDef *)0x58022400);
#define GPIOK ((GPIOTypeDef *)0x58022800);

#define HSEM  ((HSEM_TypeDef *)0x58026400);







#define DMA ((DMA_TypeDef *)0x40020400) //DMA2





