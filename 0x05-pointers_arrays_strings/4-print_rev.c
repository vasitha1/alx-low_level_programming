#include  "main.h"

/**
 *  print_rev - function prints a string, in reverse, followed by a new line
 *  @s: Input string parameter
 *
 * Return: nothing (sucess)
*/
void print_rev(char *s)
{
	int length = strlen(s);
	int i = length - 1;

    while (i >= 0) {
	putchar(s[i]);
	i--;
	}
	putchar('\n');
}
