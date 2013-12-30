#ifndef __CONFIG_H_7510PW22
#define __CONFIG_H_7510PW22

#define CONFIG_ARV7510PW22	1
#define CONFIG_ARCADYAN		"ARV7510PW22"

#define CONFIG_SYS_MAX_RAM	64*1024*1024
#define CONFIG_USE_DDR_PSC_64	1
#define	CONFIG_SYS_PROMPT	"ARV7510PW22 # "

#define CONFIG_AR8216_SWITCH	1

#define CONFIG_BUTTON_PORT1
#define CONFIG_BUTTON_PIN	12
#define CONFIG_BUTTON_LEVEL	0

#define CONFIG_ENV_ADDR			0xB0040000
#define CONFIG_ENV_SIZE			0x20000

#define CONFIG_KERNEL_ADDR_ENV	"kernel_addr=0xB0060000\0"
#define CONFIG_RAM_ADDR_ENV	"ram_addr=0x80100000\0"

#include "arcadyan-common.h"

#endif
