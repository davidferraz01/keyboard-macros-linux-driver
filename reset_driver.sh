# Remove usbkbd with Macros and load standard usbhid driver.
sudo modprobe -r usbkbd
sudo rm /lib/modules/$(uname -r)/kernel/drivers/hid/usbhid/usbkbd.ko
sudo modprobe usbhid