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
    /* 0x00 */
    uint32_t HCCHAR;
    /* 0x04 */
    uint32_t HCSPLT;
    /* 0x08 */
    uint32_t HCINT;
    /* 0x0C */
    uint32_t HCINTMSK;
    /* 0x10 */
    union {
        uint32_t HCTSIZ;
        uint32_t HCTSIZSG;
    };
    /* 0x14 */
    union {
        uint32_t HCDMA;
        uint32_t HCDMASG;
    };
    uint32_t RESERVED;
    /* 0x1C */
    uint32_t HCDMAB;
} _OTG_HS_HostChannel_TypeDef;

typedef struct {
    /* 0x00 */
    uint32_t DIEPCTL;
    /* 0x04 */
    uint32_t RESERVED0;
    /* 0x08 */
    uint32_t DIEPINT;
    /* 0x0C */
    uint32_t RESERVED1;
    /* 0x10 */
    uint32_t DIEPTSIZ;
    /* 0x14 */
    uint32_t DIEPDMA;
    /* 0x18 */
    uint32_t DTXFSTS;
    /* 0x1C */
    uint32_t RESERVED2;
} _OTG_HS_DeviceInputChannel_TypeDef;

typedef struct {
    /* 0x00 */
    uint32_t DOEPCTL;
    /* 0x04 */
    uint32_t RESERVED0;
    /* 0x08 */
    uint32_t DOEPINT;
    /* 0x0C */
    uint32_t RESERVED1;
    /* 0x10 */
    uint32_t DOEPTSIZ;
    /* 0x14 */
    uint32_t DOEPDMA;
    /* 0x18 */
    uint32_t RESERVED2[2];
} _OTG_HS_DeviceOutputChannel_TypeDef;

typedef struct {
    /* 0x000 */
    uint32_t GOTGCTL;
    /* 0x004 */
    uint32_t GOTGINT;
    /* 0x008 */
    uint32_t GAHBCFG;
    /* 0x00C */
    uint32_t GUSBCFG;
    /* 0x010 */
    uint32_t GRSTCTL;
    /* 0x014 */
    uint32_t GINTSTS;
    /* 0x018 */
    uint32_t GINTMSK;
    /* 0x01C */
    uint32_t GRXSTSR;
    /* 0x020 */
    uint32_t GRXSTSP;
    /* 0x024 */
    uint32_t GRXFSIZ;
    /* 0x028 */
    union {
        uint32_t HNPTXFSIZ;
        uint32_t DIEPTXF0;
    };
    /* 0x02C */
    uint32_t HNPTXSTS;
    /* 0x030 */
    uint32_t RESERVED0[2];
    /* 0x038 */
    uint32_t GCCFG;
    /* 0x03C */
    uint32_t CID;
    /* 0x040 */
    uint32_t RESERVED1[5];
    /* 0x054 */
    uint32_t GLPMCFG;
    /* 0x058 */
    uint32_t RESERVED2[42];
    /* 0x100 */
    uint32_t HPTXFSIZ;
    /* 0x104 */
    uint32_t DIEPTXF1;
    /* 0x108 */
    uint32_t DIEPTXF2;
    /* 0x10C */
    uint32_t DIEPTXF3;
    /* 0x110 */
    uint32_t DIEPTXF4;
    /* 0x114 */
    uint32_t DIEPTXF5;
    /* 0x118 */
    uint32_t DIEPTXF6;
    /* 0x11C */
    uint32_t DIEPTXF7;
    /* 0x120 */
    uint32_t RESERVED3[184];
    /* 0x400 */
    uint32_t HCFG;
    /* 0x404 */
    uint32_t HFIR;
    /* 0x408 */
    uint32_t HFNUM;
    /* 0x40C */
    uint32_t RESERVED4;
    /* 0x410 */
    uint32_t HPTXSTS;
    /* 0x414 */
    uint32_t HAINT;
    /* 0x418 */
    uint32_t HAINTMSK;
    /* 0x41C */
    uint32_t HFLBADDR;
    /* 0x420 */
    uint32_t RESERVED5[8];
    /* 0x440 */
    uint32_t HPRT;
    /* 0x444 */
    uint32_t RESERVED6[47];
    /* 0x500 */
    _OTG_HS_HostChannel_TypeDef HostChannel[16];
    /* 0x700 */
    uint32_t RESERVED7[64];
    /* 0x800 */
    uint32_t DCFG;
    /* 0x804 */
    uint32_t DCTL;
    /* 0x808 */
    uint32_t DSTS;
    /* 0x80C */
    uint32_t RESERVED8;
    /* 0x810 */
    uint32_t DIEPMSK;
    /* 0x814 */
    uint32_t DOEPMSK;
    /* 0x818 */
    uint32_t DAINT;
    /* 0x81C */
    uint32_t DAINTMSK;
    /* 0x820 */
    uint32_t RESERVED9[2];
    /* 0x828 */
    uint32_t DVBUSDIS;
    /* 0x82C */
    uint32_t DVBUSPULSE;
    /* 0x830 */
    uint32_t DTHRCTL;
    /* 0x834 */
    uint32_t DIEPEMPMSK;
    /* 0x838 */
    uint32_t DEACHINT;
    /* 0x83C */
    uint32_t DEACHINTMSK;
    /* 0x840 */
    uint32_t RESERVED10;
    /* 0x844 */
    uint32_t DIEPEACHMSK1;
    /* 0x848 */
    uint32_t RESERVED11[15];
    /* 0x884 */
    uint32_t DOEPEACHMSK1;
    /* 0x888 */
    uint32_t RESERVED12[30];
    /* 0x900 */
    _OTG_HS_DeviceInputChannel_TypeDef DeviceInputChannel[8];
    /* 0xA00 */
    uint32_t RESERVED13[64];
    /* 0xB00 */
    _OTG_HS_DeviceOutputChannel_TypeDef DeviceOutputChannel[8];
    /* 0xC00 */
    uint32_t RESERVED14[128];
    /* 0xE00 */
    uint32_t PCGCCTL;
} OTG_HS_TypeDef;