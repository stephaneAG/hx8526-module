#include <linux/module.h>

static int __init khello_init (void)
{
        printk(KERN_INFO "%s : HELLO\n", THIS_MODULE->name);
        return 0; 
}

static void __exit khello_exit (void)
{
        printk(KERN_INFO "%s : BYE!\n", THIS_MODULE->name);
}

module_init(khello_init);
module_exit(khello_exit);
MODULE_LICENSE("GPL");
