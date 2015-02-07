
include $(srctree)/drivers/misc/mediatek/Makefile.custom

# Module project related part

ifeq ($(CONFIG_MTK_CM36283),y)
obj-y	+=  alsps/cm36283/
endif

ifeq ($(CONFIG_MTK_TMD2771),y)
obj-y	+=  alsps/tmd2771/
endif

ifeq ($(CONFIG_MTK_TMD2771_AUTO),y)
obj-y	+=  alsps/tmd2771_auto/
endif

ifeq ($(CONFIG_MTK_BMA050-NEW),y)
obj-y   +=  accelerometer/bma050-new/
endif

ifeq ($(CONFIG_MTK_KXTIK1004),y)
obj-y   +=  accelerometer/kxtik1004/
endif

ifeq ($(CONFIG_MTK_BMC156_ACC),y)
obj-y   +=  accelerometer/bmc156_acc/
endif

ifeq ($(CONFIG_MTK_KXTJ9),y)
obj-y   +=  accelerometer/kxtj9/
endif

ifeq ($(CONFIG_MTK_LSM303D),y)
obj-y   +=  accelerometer/lsm303d/
obj-y   +=  magnetometer/lsm303d/
endif
ifeq ($(CONFIG_MTK_MPU3000),y)
obj-y   +=  gyroscope/mpu3000/
endif
ifeq ($(CONFIG_MTK_L3GD20),y)
obj-y   +=  gyroscope/l3gd20/
endif
ifeq ($(CONFIG_MTK_MPU3050C),y)
obj-y   +=  gyroscope/mpu3050c/
endif

ifeq ($(CONFIG_MTK_BMG160),y)
obj-y   +=  gyroscope/bmg160/
endif
ifeq ($(CONFIG_MTK_BMM050-NEW),y)
obj-y	+=  magnetometer/bmm050-new/
endif
ifeq ($(CONFIG_MTK_BMC156_MAG),y)
obj-y	+=  magnetometer/bmc156_mag/
endif

ifeq ($(CONFIG_MTK_MMC3416X),y)
obj-y	+=  magnetometer/mmc3416x/
endif

ifneq ($(CONFIG_ARCH_MTK_PROJECT),)
ARCH_MTK_PROJECT := $(shell echo $(CONFIG_ARCH_MTK_PROJECT))
obj-y	+= core/
obj-y	+= dct/dct/
endif

obj-y   +=  lcm/
#obj-y	+=  hdmi/
obj-y	+=  camera/camera/
obj-y	+=  imgsensor/hi253_yuv/
obj-y	+=  imgsensor/ov2659_yuv/
obj-y	+=  imgsensor/ov8825_mipi_raw/
obj-y   +=  flashlight/constant_flashlight/
obj-y	+=  vibrator/
obj-y	+=  leds/
obj-y	+=  keypad/
obj-y	+=  sound/
obj-y	+=  accdet/
#obj-y	+=  wmt/
