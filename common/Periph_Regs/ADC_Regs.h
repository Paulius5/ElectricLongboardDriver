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
  uint32_t CR;
  /* @Start=0x0C, @End=0x13 */
  uint32_t CFGR[2];
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