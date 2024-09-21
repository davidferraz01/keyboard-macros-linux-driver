#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/export-internal.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif


static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf6cfa113, "usb_register_driver" },
	{ 0xb6929312, "usb_kill_urb" },
	{ 0xc755dc6c, "usb_free_urb" },
	{ 0x193965ba, "usb_free_coherent" },
	{ 0x37a0cba, "kfree" },
	{ 0xa3535033, "input_unregister_device" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xddd8354d, "usb_submit_urb" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xa7909373, "_dev_warn" },
	{ 0x7da05b18, "_dev_err" },
	{ 0x92997ed8, "_printk" },
	{ 0xb83ea44d, "input_event" },
	{ 0xf812cff6, "memscan" },
	{ 0x38281fa4, "_dev_info" },
	{ 0x189b3e1, "usb_deregister" },
	{ 0x767648eb, "kmalloc_caches" },
	{ 0x4c1b64b8, "kmalloc_trace" },
	{ 0x25214310, "input_allocate_device" },
	{ 0xa06775b5, "usb_alloc_urb" },
	{ 0xd2bd3dc7, "usb_alloc_coherent" },
	{ 0xa916b694, "strnlen" },
	{ 0xdd64e639, "strscpy" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x7842ba96, "input_register_device" },
	{ 0x628a8088, "device_set_wakeup_enable" },
	{ 0xad2ffd5d, "input_free_device" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x9b9daf0, "module_layout" },
};

MODULE_INFO(depends, "usbcore");

MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic03isc01ip01in*");
