cmd_/home/david/Documentos/ihs/keyboard-macros-linux-driver/usbhid.mod := printf '%s\n'   hid-core.o hiddev.o hid-pidff.o | awk '!x[$$0]++ { print("/home/david/Documentos/ihs/keyboard-macros-linux-driver/"$$0) }' > /home/david/Documentos/ihs/keyboard-macros-linux-driver/usbhid.mod
