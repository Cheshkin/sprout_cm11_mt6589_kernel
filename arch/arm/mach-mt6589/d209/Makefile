
include $(srctree)/drivers/misc/mediatek/Makefile.custom

# Module project related part

ifeq ($(CONFIG_MTK_TMD2771_AUTO),y)
obj-y	+=  alsps/tmd2771_auto/
endif


ifeq ($(CONFIG_MTK_KXJ9),y)
obj-y   +=  accelerometer/kxtj9/
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
obj-y	+=  imgsensor/ov8825_mipi_raw/
obj-y	+=  imgsensor/ov2659_yuv/
obj-y	+=  imgsensor/hi253_yuv/
obj-y   +=  flashlight/constant_flashlight/
obj-y	+=  vibrator/
obj-y	+=  leds/
obj-y	+=  keypad/
obj-y	+=  sound/
obj-y	+=  accdet/
obj-y	+=  wmt/
