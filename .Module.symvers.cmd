cmd_/home/david/Documentos/ihs/keyboard-macros-linux-driver/Module.symvers :=  sed 's/ko$$/o/'  /home/david/Documentos/ihs/keyboard-macros-linux-driver/modules.order | scripts/mod/modpost -m      -o /home/david/Documentos/ihs/keyboard-macros-linux-driver/Module.symvers -e -i Module.symvers -T - 