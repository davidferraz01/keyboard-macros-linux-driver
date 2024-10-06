make -C /lib/modules/$(uname -r)/build M=$(pwd) modules
sudo cp *.ko /lib/modules/$(uname -r)/kernel/drivers/hid/usbhid/
sudo depmod -a
sudo modprobe -r usbhid
sudo modprobe usbkbd