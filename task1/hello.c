#include <linux/module.h>    // included for all kernel modules
#include <linux/kernel.h>    // included for KERN_INFO
#include <linux/init.h>      // included for __init and __exit macros

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Daksh");
MODULE_DESCRIPTION("A Simple Hello World module");

static int __init hello_init(void)
{
	    printk(KERN_DEBUG "Hello world!\n");
	        return 0;  
}

static void __exit hello_cleanup(void)
{
	    printk(KERN_DEBUG "Cleaning up module.\n");
}

module_init(hello_init);
module_exit(hello_cleanup);
