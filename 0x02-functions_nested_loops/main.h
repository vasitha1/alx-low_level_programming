#include <unistd.h>/*declaring library for function write*/

/*creating a header guard before defining it*/
#ifndef MAIN_H
#define MAIN_H

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}

#endif
