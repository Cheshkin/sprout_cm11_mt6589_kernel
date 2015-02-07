include $(srctree)/drivers/misc/mediatek/Makefile.custom

ccflags-y += -I$(MTK_PROJECT_PATH_ROOT)/touchpanel/ft5306/

# Linux driver folder
ccflags-y += -I$(srctree)/drivers/input/touchscreen/mediatek/$(MTK_PLATFORM)/$(ARCH_MTK_PROJECT)/ft5306/
ccflags-y += -I$(srctree)/drivers/input/touchscreen/mediatek/


ifeq ($(CONFIG_MTK_PLATFORM),"mt6589")
    ccflags-y += -DMT6589
endif

obj-y	+=  ft5306_driver.o

