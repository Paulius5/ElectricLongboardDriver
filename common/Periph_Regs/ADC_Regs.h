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
  ADC_NOT_READY,
  ADC_READY
} ___ADC_ADRDY_Enum;

typedef enum {
  ADC_NO_EOS,
  ADC_EOS
} ___ADC_EOS_Enum;

typedef enum {
  ADC_NO_EOC,
  ADC_EOC
} ___ADC_EOC_Enum;

typedef enum {
  ADC_NO_OVERRUN,
  ADC_OVERRUN
} ___ADC_OVR_Enum;

typedef enum {
  ADC_NO_WDG_EVENT,
  ADC_WDG_EVENT
} ___ADC_AWD_Enum;

typedef enum {
  ADC_NO_OVERFLOW,
  ADC_OVERFLOW
} ___ADC_OVF_Enum;

typedef enum {
  ADC_LDO_DISABLE,
  ADC_LDO_ENABLE
} ___ADC_LDO_Enum;

typedef enum {
  ADC_INTERRUPT_DISABLE,
  ADC_INTERRUPT_ENABLE
} ___ADC_IER_Enum;

typedef enum {
  ADC_OFF = 0x0U,
  ADC_ON_NOOP = 0x1U,
  ADC_ON_ADDIS = 0x3U,
} ___ADC_EN_Enum;

typedef enum {
  ADC_CONV_NOOP = 0x0u,
  ADC_CONV_REGULAR_START = 0x1u,
  ADC_CONV_INJECTED_START = 0x2u,
  ADC_CONV_REGULAR_STOP = 0x4u,
  ADC_CONV_INJECTED_STOP = 0x8u
} ___ADC_CONV_Enum;

typedef enum {
  ADC_CLK_BELOW_6MHZ = 0x0u,
  ADC_CLK_BELOW_12MHZ = 0x1u,
  ADC_CLK_BELOW_25MHZ = 0x2u,
  ADC_CLK_BELOW_50MHZ = 0x3u
} ___ADC_BOOST_Enum;

typedef enum {
  ADC_LIN_CAL_DISABLE,
  ADC_LIN_CAL_ENABLE
} ___ADC_LINCAL_EN_Enum;

typedef enum {
  ADC_LIN_CAL_NOT_READY,
  ADC_LIN_CAL_READY
} ___ADC_LIN_CAL_READY_Enum;

typedef enum {
  ADC_VREG_DISABLE,
  ADC_VREG_ENABLE
} ___ADC_VREG_EN_Enum;

typedef enum {
  ADC_PWRDN_OFF,
  ADC_PWRDN_ON
} ___ADC_PWRDN_Enum;

typedef enum {
  ADC_CAL_SINGLEENDED,
  ADC_CAL_DIFFERENTIAL
} ___ADC_CAL_DIF_Enum;

typedef enum {
  ADC_CAL_COMPLETE,
  ADC_CAL_START
} ___ADC_CAL_Enum;

typedef enum {
  ADC_REGULAR,
  ADC_DMA_ONE_SHOT,
  ADC_DFSDM,
  ADC_DMA_CIRCULAR
} ___ADC_DMNGT_Enum;

typedef enum {
  ADC_RES_16BITS = 0x0u,
  ADC_RES_14BITS_LEGACY = 0x1u,
  ADC_RES_12BITS_LEGACY = 0x2u,
  ADC_RES_10BITS = 0x3u,
  ADC_RES_14BITS = 0x5u,
  ADC_RES_12BITS = 0x6u,
  ADC_RES_8BITS = 0x7u
} ___ADC_RES_Enum;

typedef enum {
  ADC_TRIG_DISABLED,
  ADC_TRIG_RISING,
  ADC_TRIG_FALLING,
  ADC_TRIG_RISING_FALLING
} ___ADC_TRIG_Enum;

typedef enum {
  ADC_DR_PRESERVE,
  ADC_DR_OVERWRITE
} ___ADC_OVRMOD_Enum;

typedef enum {
  ADC_CONT_SINGLECONV,
  ADC_CONT_CONTINUOUS
} ___ADC_CONT_Enum;

typedef enum {
  ADC_AUTODELAY_OFF,
  ADC_AUTODELAY_ON
} ___ADC_AUTDLY_Enum;

typedef enum {
  ADC_DISCONT_DISABLE,
  ADC_DISCONT_ENABLE
} ___ADC_DISCEN_Enum;

typedef enum {
  ADC_JSQR_QUEUE_NEVER_EMPTY,
  ADC_JSQR_QUEUE_ALLOW_EMPTY
} ___ADC_JSQRQM_Enum;

typedef enum {
  ADC_AWDG1_ALL_CHANNELS,
  ADC_AWDG1_SINGLE_CHANNEL
} ___ADC_AWDG1_SGL_Enum;

typedef enum {
  ADC_AWDG1_CHANNELS_DISABLE,
  ADC_AWDG1_CHANNELS_ENABLE
} ___ADC_AWDG1_EN_Enum;

typedef enum {
  ADC_JAUTO_DISABLE,
  ADC_JAUTO_ENABLE
} ___ADC_JAUTO_Enum;

typedef enum {
  ADC_INJECTED_QUEUE_ENABLE,
  ADC_INJECTED_QUEUE_DISABLE
} ___ADC_JQDIS_Enum;

typedef enum {
  ADC_OVERSAMPLE_DISABLE,
  ADC_OVERSAMPLE_ENABLE
} ___ADC_OVERSAMPLE_EN_Enum;

typedef struct {
  /* @Start=0x00, @End=0x03 */
  union {
    uint32_t ISR;
    struct _ISR {
      ___ADC_ADRDY_Enum ADRDY : 1;
      ___ADC_EOS_Enum EOSMP : 1;
      ___ADC_EOC_Enum EOC : 1;
      ___ADC_EOS_Enum EOS : 1;
      ___ADC_OVR_Enum OVR : 1;
      ___ADC_EOC_Enum JEOC : 1;
      ___ADC_EOS_Enum JEOS : 1;
      ___ADC_AWD_Enum AWD1 : 1;
      ___ADC_AWD_Enum AWD2 : 1;
      ___ADC_AWD_Enum AWD3 : 1;
      ___ADC_OVF_Enum JQOVF : 1;
      int : 1;
      ___ADC_LDO_Enum LDORDY : 1;
      int : 19;
    } _ISR;
  };
  /* @Start=0x04, @End=0x07 */
  union {
    uint32_t IER;
    struct _IER {
      ___ADC_IER_Enum ADRDYIE : 1;
      ___ADC_IER_Enum EOSMPIE : 1;
      ___ADC_IER_Enum EOCIE : 1;
      ___ADC_IER_Enum EOSIE : 1;
      ___ADC_IER_Enum OVRIE : 1;
      ___ADC_IER_Enum JEOCIE : 1;
      ___ADC_IER_Enum JEOSIE : 1;
      ___ADC_IER_Enum AWD1IE : 1;
      ___ADC_IER_Enum AWD2IE : 1;
      ___ADC_IER_Enum AWD3IE : 1;
      ___ADC_IER_Enum JQOVFIE : 1;
      int : 21;
    } _IER;
  };
  /* @Start=0x08, @End=0x0B */
  union {
    uint32_t CR;
    struct _CR {
      ___ADC_EN_Enum ADEN : 2;
      ___ADC_CONV_Enum CONV : 4;
      int : 2;
      ___ADC_BOOST_Enum BOOST : 2;
      int : 6;
      ___ADC_LINCAL_EN_Enum ADCALLIN : 1;
      int : 5;
      ___ADC_LIN_CAL_READY_Enum LINCALRDYW1 : 1;
      ___ADC_LIN_CAL_READY_Enum LINCALRDYW2 : 1;
      ___ADC_LIN_CAL_READY_Enum LINCALRDYW3 : 1;
      ___ADC_LIN_CAL_READY_Enum LINCALRDYW4 : 1;
      ___ADC_LIN_CAL_READY_Enum LINCALRDYW5 : 1;
      ___ADC_LIN_CAL_READY_Enum LINCALRDYW6 : 1;
      ___ADC_VREG_EN_Enum VREGEN : 1;
      ___ADC_PWRDN_Enum PWRDN : 1;
      ___ADC_CAL_DIF_Enum CAL_DIF : 1;
      ___ADC_CAL_Enum ADCCAL : 1;
    } _CR;
  };
  /* @Start=0x0C, @End=0x13 */
  union {
    uint32_t CFGR[2];
    struct _CFGR {
      ___ADC_DMNGT_Enum DMNGT : 2;
      ___ADC_RES_Enum RES : 3;
      unsigned int EXTSEL : 5;
      ___ADC_TRIG_Enum EXTEN : 2;
      ___ADC_OVRMOD_Enum OVRMOD : 1;
      ___ADC_CONT_Enum CONT : 1;
      ___ADC_AUTDLY_Enum AUTDLY : 1;
      unsigned int : 1;
      ___ADC_DISCEN_Enum DISCEN : 1;
      unsigned int DISCNUM : 3;
      ___ADC_DISCEN_Enum JDISCEN : 1;
      ___ADC_JSQRQM_Enum JSQRQM : 1;
      ___ADC_AWDG1_SGL_Enum AWDG1SGL : 1;
      ___ADC_AWDG1_EN_Enum AWDG1EN : 1;
      ___ADC_AWDG1_EN_Enum JAWDG1EN : 1;
      ___ADC_JAUTO_Enum JAUTO : 1;
      unsigned int AWD1CH : 5;
      ___ADC_JQDIS_Enum JQDIS : 1;
      unsigned int : 0;
      ___ADC_OVERSAMPLE_EN_Enum ROVSE : 1;
      ___ADC_OVERSAMPLE_EN_Enum JOVSE : 1;
      unsigned int : 3;
      unsigned int OVSS : 4;

    } _CFGR;
  };
  /* @Start=0x14, @End=0x1B */
  uint32_t SMPR[2];
  /* @Start=0x1C, @End=0x1F */
  uint32_t PCSEL;
  /* @Start=0x20, @End=0x23 */
  uint32_t LTR1;
  /* @Start=0x24, @End=0x27 */
  uint32_t HTR1;
  /* @Start=0x28, @End=0x2F */
  uint32_t RESERVED0[2];
  /* @Start=0x30, @End=0x3F */
  uint32_t SQR[4];
  /* @Start=0x40, @End=0x43 */
  uint32_t DR;
  /* @Start=0x44, @End=0x4B */
  uint32_t RESERVED1[2];
  /* @Start=0x4C, @End=0x4F */
  uint32_t JSQR;
  /* @Start=0x50, @End=0x5F */
  uint32_t RESERVED2[4];
  /* @Start=0x60, @End=0x6F */
  uint32_t OFR[4];
  /* @Start=0x70, @End=0x7F */
  uint32_t RESERVED3[4];
  /* @Start=0x80, @End=0x8F */
  uint32_t JDR[4];
  /* @Start=0x90, @End=0x9F */
  uint32_t RESERVED4[4];
  /* @Start=0xA0, @End=0xA3 */
  uint32_t AWD2CR;
  /* @Start=0xA4, @End=0xA7 */
  uint32_t AWD3CR;
  /* @Start=0xA8, @End=0xAF */
  uint32_t RESERVED5[2];
  /* @Start=0xB0, @End=0xB3 */
  uint32_t LTR2;
  /* @Start=0xB4, @End=0xB7 */
  uint32_t HTR2;
  /* @Start=0xB8, @End=0xBB */
  uint32_t LTR3;
  /* @Start=0xBC, @End=0xBF */
  uint32_t HTR3;
  /* @Start=0xC0, @End=0xC3 */
  uint32_t DIFSEL;
  /* @Start=0xC4, @End=0xCB */
  uint32_t CALFACT[2];
  /* @Start=0xCC, @End=0xD3 */
  uint32_t RESERVED6[2];
} ADC_TypeDef;

typedef struct {
  /* @Start=0x00, @End=0x03 */
  uint32_t CSR;
  /* @Start=0x04, @End=0x07 */
  uint32_t RESERVED0;
  /* @Start=0x08, @End=0x0B */
  uint32_t CCR;
  /* @Start=0x0C, @End=0x13 */
  uint32_t CDR[2];
} ADC_CommonTypeDef;