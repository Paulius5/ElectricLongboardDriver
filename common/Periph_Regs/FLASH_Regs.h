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
    FLASH_REGISTER_UNLOCKED,
    FLASH_REGISTER_LOCKED
} ___FLASH_LOCK_Enum;

typedef struct {
    union {
        uint32_t ACR;
        struct _ACR {
            uint32_t latency : 3;
            uint32_t WR_HIGH_FREQ : 2;
            int : 27;
        } _ACR;
    };
    uint32_t KEYR;
    uint32_t OPTKEYR;
    uint32_t CR;
    uint32_t SR;
    uint32_t CCR;
    uint32_t OPTCR;
    uint32_t OPTSR_CUR;
    uint32_t OPTSR_PRG;
    uint32_t OPTCCR;
    uint32_t PRAR_CUR;
    uint32_t PRAR_PRG;
    uint32_t SCAR_CUR;
    uint32_t SCAR_PRG;
    uint32_t WPSGN_CUR;
    uint32_t WPSGN_PRG;
    uint32_t BOOT7_CUR;
    uint32_t BOOT7_PRG;
    uint32_t BOOT4_CUR;
    uint32_t BOOT4_PRG;
    uint32_t CRCCR;
    uint32_t CRCSADDR;
    uint32_t CRCEADDR;
    uint32_t CRCDATAR;
    uint32_t ECC_FAR;
} __FLASH_OptBytes_TypeDef;

typedef struct {
    __FLASH_OptBytes_TypeDef BANK1;
    uint32_t RESERVED[16];
    __FLASH_OptBytes_TypeDef BANK2;
} FLASH_TypeDef;

