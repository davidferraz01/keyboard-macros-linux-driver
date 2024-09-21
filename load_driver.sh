make -C /lib/modules/$(uname -r)/build M=/home/david/Documentos/ihs/keyboard-macros-linux-driver/ modules
sudo cp *.ko /lib/modules/$(uname -r)/kernel/drivers/hid/usbhid/
sudo depmod -a
sudo modprobe -r usbhid
sudo modprobe usbkbd