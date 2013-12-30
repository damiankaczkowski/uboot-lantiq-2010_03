#ifndef __CONFIG_H_7518
#define __CONFIG_H_7518

#define CONFIG_ARV7518		1
#define CONFIG_ARCADYAN		"ARV7518PW"

#define CONFIG_SYS_MAX_RAM	64*1024*1024
#define CONFIG_USE_DDR_PSC_64	1
#define	CONFIG_SYS_PROMPT	"ARV7518PW # "

#define CONFIG_AR8216_SWITCH	1

#define CONFIG_BUTTON_PORT1
#define CONFIG_BUTTON_PIN	30
#define CONFIG_BUTTON_LEVEL	0

#include "arcadyan-common.h"

#endif