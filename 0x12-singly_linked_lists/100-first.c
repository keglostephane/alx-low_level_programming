#include <stdio.h>

/**
 * run_before_main - runs before the main function
 *
 */
void run_before_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

void __attribute__((constructor)) run_before_main();
