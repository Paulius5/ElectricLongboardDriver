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
    uint32_t CREL;
    uint32_t ENDN;
    uint32_t RESERVED0;
    uint32_t DBTP;
    uint32_t TEST;
    uint32_t RWD;
    uint32_t CCCR;
    uint32_t NBTP;
    uint32_t TSCC;
    uint32_t TSCV;
    uint32_t TOCC;
    uint32_t TOCV;
    uint32_t RESERVED1[4];
    uint32_t ECR;
    uint32_t PSR;
    uint32_t TDCR;
    uint32_t IR;
    uint32_t IE;
    uint32_t ILS;
    uint32_t ILE;
    uint32_t RESERVED2[8];
    uint32_t GFC;
    uint32_t SIDFC;
    uint32_t XIDFC;
    uint32_t HPMS;
    uint32_t NDAT[2];
    uint32_t RXF0S;
    uint32_t RXF0S;
    uint32_t RXF0A;
    uint32_t RXBC;
    uint32_t RXF1C;
    uint32_t RXF1S;
    uint32_t RXF1A;
    uint32_t RXESC;
    uint32_t TXBC;
    uint32_t TXESC;
    uint32_t TXBRP;
    uint32_t TXBAR;
    uint32_t TXBCR;
    uint32_t TXBTO;
    uint32_t TXBCF;
    uint32_t TXBTIE;
    uint32_t TXBCIE;
    uint32_t TXEFS;
    uint32_t TXEFA;
    uint32_t TTTMC;
    uint32_t TTRMC;
    uint32_t TTOCF;
    uint32_t TTMLM;
    uint32_t TURCF;
    uint32_t TTOCN;
    uint32_t TTGTP;
    uint32_t TTTMK;
    uint32_t TTIR;
    uint32_t TTIE;
    uint32_t TTILS;
    uint32_t TTOST;
    uint32_t TURNA;
    uint32_t TTLGT;
    uint32_t TTCTC;
    uint32_t TTCPT;
    uint32_t TTCSM;
    uint32_t RESERVED3[47]; //or 111?
    uint32_t TTTS;
} FDCAN_TypeDef;

typedef struct {
    uint32_t CREL;
    uint32_t CCFG;
    uint32_t CSTAT;
    uint32_t CWD;
    uint32_t IR;
    uint32_t IE;
} CCU_TypeDef;