#include <linux/module.h>       /* Needed by all modules */
#include <linux/kernel.h>       /* Needed for KERN_INFO */

MODULE_AUTHOR ("X Men");
MODULE_LICENSE("GPLv2"); 
MODULE_DESCRIPTION ("A very simple module");

int init_module(void)
{
        printk(KERN_INFO "Hello world!\n");
        /*
         * A non 0 return means init_module failed; module can't be loaded.
         */
        return 0;
}

void cleanup_module(void)
{
        printk(KERN_INFO "Goodbye, cruel world \n");
}
