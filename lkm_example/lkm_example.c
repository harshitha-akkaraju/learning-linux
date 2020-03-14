// Harshitha Akkaraju
// March 2020

// This module is a hello world equivalent of linux kernel development

// imports the required header files required for linux kernel development
#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Harshitha Akkaraju");
MODULE_DESCRIPTION("Hello World equivalent of Linux Kernel Module");

// loading function for the module
static int __init lkm_example_init(void) {
    printk(KERN_INFO "Hello, world!\n");
    return 0;
}

static void __exit lkm_example_exit(void) {
    printk(KERN_INFO "Until next time, world!\n");
}

// this tells the kernel which functions are loading or unloading functions
module_init(lkm_example_init);
module_exit(lkm_example_exit);