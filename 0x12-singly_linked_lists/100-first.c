#include <stdio.h>

/**
 * tortoise_hare - a function that executes before a main function
 *
 */

void __attribute__ ((constructor)) tortoise_hare(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
