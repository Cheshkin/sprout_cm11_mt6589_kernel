/*
* Copyright (C) 2011-2014 MediaTek Inc.
* 
* This program is free software: you can redistribute it and/or modify it under the terms of the 
* GNU General Public License version 2 as published by the Free Software Foundation.
* 
* This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; 
* without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
* See the GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License along with this program.
* If not, see <http://www.gnu.org/licenses/>.
*/
#ifndef _MT65XX_LEDS_H
#define _MT65XX_LEDS_H

#include <linux/leds.h>
//#include "../../arch/arm/mach-mt6589/sprout/leds/mt65xx/cust_leds.h"
#include <cust_leds.h>

extern int mt65xx_leds_brightness_set(enum mt65xx_led_type type, enum led_brightness value);

#endif

