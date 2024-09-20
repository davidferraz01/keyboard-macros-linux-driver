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

SYMBOL_CRC(hiddev_hid_event, 0xc5400729, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xf8bf752, "hid_output_report" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xfbbc83c1, "param_ops_uint" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x9489eb8d, "hid_driver_suspend" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x4d30cfdb, "kill_fasync" },
	{ 0xf6cfa113, "usb_register_driver" },
	{ 0xdc934589, "hid_driver_reset_resume" },
	{ 0xcf2a6966, "up" },
	{ 0x76bd0b37, "param_array_ops" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0x69acdf38, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x7aa3c505, "hidinput_count_leds" },
	{ 0xed79c936, "usb_autopm_put_interface_no_suspend" },
	{ 0x9199e04e, "hid_driver_resume" },
	{ 0x73109e35, "usb_autopm_get_interface_no_resume" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x82ee90dc, "timer_delete_sync" },
	{ 0xe2964344, "__wake_up" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x22a15740, "hid_allocate_device" },
	{ 0x4ab841e8, "__dynamic_dev_dbg" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x63495dd, "hid_destroy_device" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x595034d6, "usb_find_interface" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbe1bc201, "device_set_node" },
	{ 0x92997ed8, "_printk" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x9b1ae0d2, "usb_clear_halt" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x7682ba4e, "__copy_overflow" },
	{ 0x3d212cd6, "usb_autopm_get_interface_async" },
	{ 0xa916b694, "strnlen" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xddd8354d, "usb_submit_urb" },
	{ 0x38281fa4, "_dev_info" },
	{ 0x510d2853, "usb_queue_reset_device" },
	{ 0xb768bc13, "hid_alloc_report_buf" },
	{ 0xe2914714, "compat_ptr_ioctl" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x7da05b18, "_dev_err" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xb59fce64, "noop_llseek" },
	{ 0x6626afca, "down" },
	{ 0x8502d7da, "hid_hw_request" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x9e0931ea, "usb_hid_driver" },
	{ 0x555dd098, "hid_hw_open" },
	{ 0xcbca9888, "usb_control_msg" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x99c6f69f, "usb_register_dev" },
	{ 0xbc4bdf6d, "fasync_helper" },
	{ 0x319737bd, "usb_unpoison_urb" },
	{ 0x85603a98, "usb_autopm_put_interface_async" },
	{ 0x756e972b, "hid_hw_close" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x9ed12e20, "kmalloc_large" },
	{ 0x19d52f1f, "hid_quirks_exit" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x189b3e1, "usb_deregister" },
	{ 0xb9d10cd, "current_task" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x361653f8, "usb_string" },
	{ 0xfb578fc5, "memset" },
	{ 0xa7909373, "_dev_warn" },
	{ 0xf9c0b663, "strlcat" },
	{ 0xb4e7866, "param_ops_charp" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xf51c477f, "usb_block_urb" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x5495392, "hid_debug" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xfd54f2ee, "usb_unlink_urb" },
	{ 0xb7826786, "_dev_notice" },
	{ 0xdd64e639, "strscpy" },
	{ 0x999e8297, "vfree" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x907177e9, "input_ff_create" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0xce8140a0, "usb_deregister_dev" },
	{ 0xb6929312, "usb_kill_urb" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x4c1b64b8, "kmalloc_trace" },
	{ 0xfa355613, "hid_quirks_init" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x3d076091, "__dev_fwnode" },
	{ 0x767648eb, "kmalloc_caches" },
	{ 0xdd19a580, "hid_add_device" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x9b9daf0, "module_layout" },
};

MODULE_INFO(depends, "hid,usbcore,usbhid");

MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic03isc*ip*in*");
