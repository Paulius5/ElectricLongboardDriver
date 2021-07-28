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

  /* @Start=0x00, @End=0x03 */
  uint32_t ISR;
  /* @Start=0x04, @End=0x07 */
  uint32_t IER;
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
  /* @Start=0x00, @End=0x04 */
  uint32_t HTR1;
  /* @Start=0x00, @End=0x04 */
  uint32_t RESERVED0[2];
  /* @Start=0x00, @End=0x04 */
  uint32_t SQR[4];
  /* @Start=0x00, @End=0x04 */
  uint32_t DR;
  /* @Start=0x00, @End=0x04 */
  uint32_t JSQR;
  /* @Start=0x00, @End=0x04 */
  uint32_t RESERVED1[4];
  /* @Start=0x00, @End=0x04 */
  uint32_t OFR[4];
  /* @Start=0x00, @End=0x04 */
  uint32_t RESERVED2[4];
  /* @Start=0x00, @End=0x04 */
  uint32_t JDR[4];
  /* @Start=0x00, @End=0x04 */
  uint32_t RESERVED3[4];
  /* @Start=0x00, @End=0x04 */
  uint32_t AWD2CR;
  /* @Start=0x00, @End=0x04 */
  uint32_t AWD3CR;
  /* @Start=0x00, @End=0x04 */
  uint32_t RESERVED4[2];
  /* @Start=0x00, @End=0x04 */
  uint32_t LTR2;
  /* @Start=0x00, @End=0x04 */
  uint32_t HTR2;
  /* @Start=0x00, @End=0x04 */
  uint32_t LTR3;
  /* @Start=0x00, @End=0x04 */
  uint32_t HTR3;
  /* @Start=0x00, @End=0x04 */
  uint32_t DIFSEL;
  /* @Start=0x00, @End=0x04 */
  uint32_t CALFACT[2];
} ADC_TypeDef;

typedef struct {
  uint32_t CSR;
  /* @Start=0x00, @End=0x04 */
  uint32_t RESERVED0;
  /* @Start=0x00, @End=0x04 */
  uint32_t CCR;
  /* @Start=0x00, @End=0x04 */
  uint32_t CDR[2];
} ADC_CommonTypeDef;