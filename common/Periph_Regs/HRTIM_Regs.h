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
    uint32_t MCR;
    uint32_t MISR;
    uint32_t MICR;
    uint32_t MDIER;
    uint32_t MCNTR;
    uint32_t MPER;
    uint32_t MREP;
    uint32_t MP1R;
    uint32_t RESERVED;
    uint32_t MP2R;
    uint32_t MP3R;
    uint32_t MP4R;
} _HRTIM_MasterTimer_TypeDef;

typedef struct {
    uint32_t CR;
    uint32_t ISR;
    uint32_t ICR;
    uint32_t DIER;
    uint32_t CNTR;
    uint32_t PER;
    uint32_t REP;
    uint32_t CMP1R;
    uint32_t CMP1CR;
    uint32_t CMP2R;
    uint32_t CMP3R;
    uint32_t CMP4R;
    uint32_t CPT1R;
    uint32_t CPT2R;
    uint32_t DTR;
    uint32_t SET1R;
    uint32_t RST1R;
    uint32_t SET2R;
    uint32_t RST2R;
    uint32_t EEFR[2];
    uint32_t RSTAR;
    uint32_t RSTBR;
    uint32_t RSTCR;
    uint32_t RSTDR;
    uint32_t RSTER;
    uint32_t CHPR;
    uint32_t CPT1ACR;
    uint32_t CPT1BCR;
    uint32_t CPT1CCR;
    uint32_t CPT1DCR;
    uint32_t CPT1ECR;
    uint32_t CPT2ACR;
    uint32_t CPT2BCR;
    uint32_t CPT2CCR;
    uint32_t CPT2DCR;
    uint32_t CPT2ECR;
    uint32_t OUTR;
    uint32_t FLTR;
} _HRTIM_Timer_TypeDef;

typedef struct {
    uint32_t CR[2];
    uint32_t ISR;
    uint32_t ICR;
    uint32_t IER;
    uint32_t OENR;
    uint32_t DISR;
    uint32_t ODSR;
    uint32_t BMCR;
    uint32_t BMTRG;
    uint32_t BMCMPR;
    uint32_t BMPER;
    uint32_t EECR[3];
    uint32_t ADCR[4];
    uint32_t RESERVED;
    uint32_t FLTINR[2];
    uint32_t BDMUPDR;
    uint32_t BDTAUPR;
    uint32_t BDTBUPR;
    uint32_t BDTCUPR;
    uint32_t BDTDUPR;
    uint32_t BDTEUPR;
    uint32_t BDMADR;
} _HRTIM_Common_TypeDef;