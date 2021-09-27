#ifdef _MSC_VER
#include "..\Temp_Defines\Temp_Defines.h"
#endif
#ifdef ARMCM7
#include "..\Include\core_cm7.h"
#endif
#ifdef ARMCM4
#include "..\Include\core_cm4.h"
#endif
#include ".\ADC_TypeDefs.h"

typedef struct {
  /* @Start=0x00, @End=0x03 */
  union {
    uint32_t ISR;
    struct _ISR {
      bool ADRDY : 1;
      bool EOSMP : 1;
      bool EOC : 1;
      bool EOS : 1;
      bool OVR : 1;
      bool JEOC : 1;
      bool JEOS : 1;
      bool AWD1 : 1;
      bool AWD2 : 1;
      bool AWD3 : 1;
      bool : 1;
      int : 1;
      bool LDORDY : 1;
      int : 19;
    } _ISR;
  };
  /* @Start=0x04, @End=0x07 */
  union {
    uint32_t IER;
    struct _IER {
      bool ADRDYIE : 1;
      bool EOSMPIE : 1;
      bool EOCIE : 1;
      bool EOSIE : 1;
      bool OVRIE : 1;
      bool JEOCIE : 1;
      bool JEOSIE : 1;
      bool AWD1IE : 1;
      bool AWD2IE : 1;
      bool AWD3IE : 1;
      bool JQOVFIE : 1;
      int : 21;
    } _IER;
  };
  /* @Start=0x08, @End=0x0B */
  union {
    uint32_t CR;
    struct _CR {
      bool ADEN : 1;
      bool ADDIS : 1;
      bool ADSTART : 1;
      bool JADSTART : 1;
      bool ADSTP : 1;
      bool JADSTP : 1;
      int : 2;
      ___ADC_BOOST_Enum BOOST : 2;
      int : 6;
      bool ADCALLIN : 1;
      int : 5;
      bool LINCALRDYW1 : 1;
      bool LINCALRDYW2 : 1;
      bool LINCALRDYW3 : 1;
      bool LINCALRDYW4 : 1;
      bool LINCALRDYW5 : 1;
      bool LINCALRDYW6 : 1;
      bool VREGEN : 1;
      bool PWRDN : 1;
      ___ADC_CAL_DIF_Enum CAL_DIF : 1;
      bool ADCCAL : 1;
    } _CR;
  };
  /* @Start=0x0C, @End=0x13 */
  union {
    struct {uint32_t CFGR[2];};
    struct _CFGR {
      ___ADC_DMNGT_Enum DMNGT : 2;
      ___ADC_RES_Enum RES : 3;
      unsigned int EXTSEL : 5;
      ___ADC_TRIG_Enum EXTEN : 2;
      ___ADC_OVRMOD_Enum OVRMOD : 1;
      ___ADC_CONT_Enum CONT : 1;
      bool AUTDLY : 1;
      unsigned int : 1;
      bool DISCEN : 1;
      unsigned int DISCNUM : 3;
      bool JDISCEN : 1;
      ___ADC_JSQRQM_Enum JSQRQM : 1;
      ___ADC_AWDG1_SGL_Enum AWDG1SGL : 1;
      bool AWDG1EN : 1;
      bool JAWDG1EN : 1;
      bool JAUTO : 1;
      unsigned int AWD1CH : 5;
      bool JQDIS : 1;
      unsigned int : 0;
      bool ROVSE : 1;
      bool JOVSE : 1;
      unsigned int : 3;
      unsigned int OVSS : 4;

    } _CFGR;
  };
  /* @Start=0x14, @End=0x1B */
  union {
    struct {uint32_t SMPR[2];};
    struct _SMPR{
      ___ADC_SMP_Enum SMP0 : 3;
      ___ADC_SMP_Enum SMP1 : 3;
      ___ADC_SMP_Enum SMP2 : 3;
      ___ADC_SMP_Enum SMP3 : 3;
      ___ADC_SMP_Enum SMP4 : 3;
      ___ADC_SMP_Enum SMP5 : 3;
      ___ADC_SMP_Enum SMP6 : 3;
      ___ADC_SMP_Enum SMP7 : 3;
      ___ADC_SMP_Enum SMP8 : 3;
      ___ADC_SMP_Enum SMP9 : 3;
      int : 2;
      ___ADC_SMP_Enum SMP10 : 3;
      ___ADC_SMP_Enum SMP11 : 3;
      ___ADC_SMP_Enum SMP12 : 3;
      ___ADC_SMP_Enum SMP13 : 3;
      ___ADC_SMP_Enum SMP14 : 3;
      ___ADC_SMP_Enum SMP15 : 3;
      ___ADC_SMP_Enum SMP16 : 3;
      ___ADC_SMP_Enum SMP17 : 3;
      ___ADC_SMP_Enum SMP18 : 3;
      ___ADC_SMP_Enum SMP19 : 3;
      int : 2;
    } _SMPR;
  };
  /* @Start=0x1C, @End=0x1F */
  union {
    uint32_t PCSEL;
    struct _PCSEL{
      bool PCSEL0 : 1;
      bool PCSEL1 : 1;
      bool PCSEL2 : 1;
      bool PCSEL3 : 1;
      bool PCSEL4 : 1;
      bool PCSEL5 : 1;
      bool PCSEL6 : 1;
      bool PCSEL7 : 1;
      bool PCSEL8 : 1;
      bool PCSEL9 : 1;
      bool PCSEL10 : 1;
      bool PCSEL11 : 1;
      bool PCSEL12 : 1;
      bool PCSEL13 : 1;
      bool PCSEL14 : 1;
      bool PCSEL15 : 1;
      bool PCSEL16 : 1;
      bool PCSEL17 : 1;
      bool PCSEL18 : 1;
      bool PCSEL19 : 1;
      int : 12;
    } _PCSEL;
  };
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
  union {
    uint32_t CSR;
    struct _CSR {
      bool ADRDY_MST : 1;
      bool EOSMP_MST : 1;
      bool EOC_MST : 1;
      bool EOS_MST : 1;
      bool OVR_MST : 1;
      bool JEOC_MST : 1;
      bool JEOS_MST : 1;
      bool AWD1_MST : 1;
      bool AWD2_MST : 1;
      bool AWD3_MST : 1;
      bool JQOVF_MST : 1;
      int : 5;
      bool ADRDY_SLV : 1;
      bool EOSMP_SLV : 1;
      bool EOC_SLV : 1;
      bool EOS_SLV : 1;
      bool OVR_SLV : 1;
      bool JEOC_SLV : 1;
      bool JEOS_SLV : 1;
      bool AWD1_SLV : 1;
      bool AWD2_SLV : 1;
      bool AWD3_SLV : 1;
      bool JQOVF_SLV : 1;
      int : 5;
    } _CSR;
  };
  /* @Start=0x04, @End=0x07 */
  uint32_t RESERVED0;
  /* @Start=0x08, @End=0x0B */
  union {
    uint32_t CCR;
    struct _CCR {
      ___ADC_DUAL_Enum DUAL : 5;
      int : 3;
      unsigned int DELAY : 4;
      int : 2;
      ___ADC_DAMDF_Enum DAMDF : 2;
      ___ADC_CKMODE_Enum CKMODE : 2;
      ___ADC_PRESC_Enum PRESC : 4;
      bool VREF_EN : 1;
      bool TEMP_EN : 1;
      bool VBAT_EN : 1;
      int : 7;
    } _CCR;
  };
  /* @Start=0x0C, @End=0x13 */
  uint32_t CDR[2];
} ADC_CommonTypeDef;