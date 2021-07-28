#ifndef uint32_t
#define uint32_t unsigned int
#endif





typedef struct {
    uint32_t CR1;           //0x00
    uint32_t CR2;           //0x04
    uint32_t SMCR;          //0x08
    uint32_t DIER;          //0x0C
    uint32_t SR;            //0x10
    uint32_t EGR;           //0x14
    uint32_t CCMR1;         //0x18
    uint32_t CCMR2;         //0x1C
    uint32_t CCER;          //0x20
    uint32_t CNT;           //0x24
    uint32_t PSC;           //0x28
    uint32_t ARR;           //0x2C
    uint32_t RCR;           //0x30
    uint32_t CCR1;          //0x34
    uint32_t CCR2;          //0x38
    uint32_t CCR3;          //0x3C
    uint32_t CCR4;          //0x40
    uint32_t RESERVED0;     //0x44
    uint32_t DCR;           //0x48
    uint32_t DMAR;          //0x4C
    uint32_t RESERVED1[4];  //0x50
    uint32_t AF1;           //0x60
    uint32_t RESERVED2;     //0x64
    uint32_t TISEL;         //0x68
} HALL_TimerTypeDef;

typedef struct {
    uint32_t CR1;       //0x00
    uint32_t CR2;       //0x04
    uint32_t SMCR;      //0x08
    uint32_t DIER;      //0x0C
    uint32_t SR;        //0x10
    uint32_t EGR;       //0x14
    uint32_t CCMR1;     //0x18
    uint32_t CCMR2;     //0x1C
    uint32_t CCER;      //0x20
    uint32_t CNT;       //0x24
    uint32_t PSC;       //0x28
    uint32_t ARR;       //0x2C
    uint32_t RCR;       //0x30
    uint32_t CCR1;      //0x34
    uint32_t CCR2;      //0x38
    uint32_t CCR3;      //0x3C
    uint32_t CCR4;      //0x40
    uint32_t BDTR;      //0x44
    uint32_t DCR;       //0x48
    uint32_t DMAR;      //0x4C
    uint32_t RESERVED;  //0x50
    uint32_t CCMR3;     //0x54
    uint32_t CCR5;      //0x58
    uint32_t CCR6;      //0x5C
    uint32_t AF1;       //0x60
    uint32_t AF2;       //0x64
    uint32_t TISEL;     //0x68
} PWM_TimerTypeDef;

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

#define PWM_TIM ((PWM_TimerTypeDef *)0x40010000); //TIM1
#define HALL_TIM ((HALL_TimerTypeDef *)0x40000000) //TIM2

#define DMA ((DMA_TypeDef *)0x40020000) //DMA1






typedef struct
{
    HALL_TimerTypeDef *HallTimer;
    PWM_TimerTypeDef *PWMTimer;
    //EXTI config, GPIO port/pin, status regs... 


} MotorHandlerTypeDef;