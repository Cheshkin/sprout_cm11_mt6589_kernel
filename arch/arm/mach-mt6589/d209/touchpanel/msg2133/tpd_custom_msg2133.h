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

#ifndef _TOUCHPANEL_H__
#define _TOUCHPANEL_H__

#include <mach/mt_boot.h>
#include <mach/mt_gpio.h>
/* Pre-defined definition */
#define TPD_TYPE_CAPACITIVE

#define TPD_POWER_SOURCE         MT65XX_POWER_LDO_VGP2
#define TPD_I2C_NUMBER           0
#define TPD_WAKEUP_TRIAL         60
#define TPD_WAKEUP_DELAY         100

#define TPD_RES_X                480			//����LCD�ֱ�������
#define TPD_RES_Y                800			//����LCD�ֱ�������

#define TPD_CALIBRATION_MATRIX  {-256, 0, 1310720, 0, 287, 0,0,0};

//#define TPD_HAVE_CALIBRATION

#define TPD_HAVE_BUTTON

#ifdef TPD_HAVE_BUTTON
//#define TPD_KEY_COUNT           2
//#define TPD_KEYS                {KEY_MENU,KEY_BACK}
//#define TPD_KEYS_DIM            {{40,850,60,60},{280,850,60,60}}										//����LCD�ֱ�������
#define TPD_KEY_COUNT           3
#define TPD_KEYS                    {KEY_MENU,KEY_HOMEPAGE,KEY_BACK}
#define TPD_KEYS_DIM            {{40,850,80,80},{200,850,80,80},{360,850,80,80}}		//����LCD�ֱ�������
#endif

//#define	TPD_XY_INVERT						//����X��Y
//#define	TPD_X_INVERT						//X��ת(�Գ�)
//#define	TPD_Y_INVERT						//Y��ת(�Գ�)

//#define	TPD_RSTPIN_1V8						//RESET PINΪ1.8Vʱ��Ҫ�����
#define	GPIO_CTP_RST_PIN_M_GPIO		0			//RESET PIN��IO�ڱ���

//#define TPD_CLOSE_POWER_IN_SLEEP				//�Ƿ�ر�TP��Դ,һ�㲻Ҫ��
//#define TP_DEBUG  							//������Ϣ����
#define TP_FIRMWARE_UPDATE						//T���������ܿ���,һ�㶼Ҫ��
//#define TP_PROXIMITY_SENSOR					//����Ϩ�����ܿ���,��Ҫʱ���Դ�


#define TPD_HOME_KEY_LONG_PRESS //add by lisong

#endif /* _TOUCHPANEL_H__ */
