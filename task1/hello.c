#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("CARLOS");
MODULE_DESCRIPTION("Hello World Module!");
MODULE_VERSION("1");


static int __init HelloWorld(void) {
	printk(KERN_INFO " Hello World!\n");
	return 0;
}

static int __exit hel_exit(void) {
	printk(KERN_INFO "Bye\n");
	return 0;
}


module_init(HelloWorld);
module_exit(hel_exit);	