make -C /lib/modules/6.1.0-25-amd64/build M=/home/david/Documentos/ihs/keyboard-macros-linux-driver/ modules
sudo cp *.ko /lib/modules/6.1.0-25-amd64/kernel/drivers/hid/usbhid/
sudo depmod -a
sudo modprobe -r usbhid
#sudo modprobe usbhid
sudo modprobe usbkbd