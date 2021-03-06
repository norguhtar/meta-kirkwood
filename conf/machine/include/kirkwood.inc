#@TYPE: Machine
#@DESCRIPTION: Machine configuration for various different Marvell Kirkwood based devices

TARGET_ARCH = "arm"

PREFERRED_PROVIDER_virtual/bootloader = ""

IMAGE_FSTYPES += "tar.gz ubi"
SERIAL_CONSOLE = "115200 ttyS0"

PREFERRED_PROVIDER_virtual/kernel ?= "linux-yocto"
PREFERRED_VERSION_linux-yocto ?= "3.10%"

# Currently all the orion devices we support use uImage
KERNEL_IMAGETYPE = "uImage"
UBOOT_ENTRYPOINT = "0x00008000"
UBOOT_LOADADDRESS = "0x00008000"

require conf/machine/include/tune-arm926ejs.inc
