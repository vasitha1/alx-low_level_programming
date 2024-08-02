#include "lists.h"

/**
 * startup_constuctor - Prints a function before main is called
 * No parameter,
 * Returns: void
 */
void startup_constuctor(void) __attribute__ ((constructor));

void startup_constuctor(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
