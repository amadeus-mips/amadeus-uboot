#ifndef __PHOENIX_ARTIX7_CONFIG_H
#define __PHOENIX_ARTIX7_CONFIG_H

/* BootROM + MIG is pretty smart. DDR and Cache initialized */
#define CONFIG_SKIP_LOWLEVEL_INIT

#define DEBUG

// this is from arch/mips/Kconfig configurations

#define CONFIG_SPL 0
#define CONFIG_SPL_SKIP_RELOCATE 0
#define CONFIG_DM_ETH 1
/*--------------------------------------------
 * CPU configuration
 */
/* CPU Timer rate */
#define CONFIG_SYS_MIPS_TIMER_FREQ	50000000 

/* Time Measuring */
//
/* ---------------------------------------------------------
 * serial config
 */

#define CONFIG_CONS_INDEX 1
#define CONFIG_SYS_NS16550_SERIAL
#define CONFIG_SYS_NS16550_COM1 0xbfd00000
#define CONFIG_SYS_NS16550_CLK 50000000
#define CONFIG_SYS_NS16550_REG_SIZE 1

// commented for now, spl build will cause trouble
// #define CONFIG_SPL_BUILD 1
/*----------------------------------------------------------------------
 * Memory Layout
 */

/* SDRAM Configuration (for final code, data, stack, heap) */
#define CONFIG_SYS_SDRAM_BASE		0x80000000
#define CONFIG_SYS_SDRAM_SIZE		0x07000000	/* 128 Mbytes */
#define CONIG_SYS_INIT_SP_ADDR		\
	(CONFIG_SYS_SDRAM_BASE + CONFIG_SYS_SDRAM_SIZE - 0x8000)

#define CONFIG_SYS_INIT_RAM_SIZE CONFIG_SYS_SDRAM_SIZE
#define CONFIG_SYS_INIT_SP_OFFSET (CONFIG_SYS_INIT_RAM_SIZE - GENERATED_GBL_DATA_SIZE)


#define CONFIG_SYS_MALLOC_LEN		(256 << 10)
#define CONFIG_SYS_MONITOR_BASE		CONFIG_SYS_TEXT_BASE
#define CONFIG_SYS_LOAD_ADDR		0x83000000 /* default load address */

/*----------------------------------------------------------------------
 * Commands
 */
// #define CONFIG_SYS_LONGHELP		/* undef to save memory */
// #define CONFIG_CMDLINE_EDITING

/*------------------------------------------------------------
 * Console Configuration
 */
#define CONFIG_SYS_CBSIZE		1024 /* Console I/O Buffer Size   */
#define CONFIG_SYS_MAXARGS		16   /* max number of command args*/

/* -------------------------------------------------
 * Environment
 */
//Disable persistent environment variable storage
#define CONFIG_ENV_IS_NOWHERE   1 


// #define CONFIG_ENV_SIZE		0x4000
// #define CONFIG_EXTRA_ENV_SETTINGS "autoload=no\0" 


/* ---------------------------------------------------------------------
 * Board boot configuration
 */

#define CONFIG_TIMESTAMP	/* Print image info with timestamp */


/* Flash */
// #define CONFIG_SYS_FLASH_BASE 0xbff00000
// #define CONFIG_FLASH_CFI_DRIVER
// #define CONFIG_SYS_FLASH_CFI
// #define CONFIG_SYS_FLASH_USE_BUFFER_WRITE
// #define CONFIG_SYS_MAX_FLASH_BANKS_DETECT   1
// #define CONFIG_SYS_MAX_FLASH_SECT           64


#define CONFIG_ENV_IS_NOWHERE      1
// #define CONFIG_ENV_SIZE 0x1000


// #define DEBUG

#endif /* __PHOENIX_ARTIX7_CONFIG_H */
