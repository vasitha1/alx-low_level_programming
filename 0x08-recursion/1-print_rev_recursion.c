#include  "main.h"

/**
 * _print_rev_recursion - function that prints a string in reverse.
 * @s: String parameter to be printed in reverse
 *
 * Return:void (sucess)
*/
void _print_rev_recursion(char *s)
{

	if (*s == '\0')
		return;


	_print_rev_recursion(s + 1);

	_putchar(*s);
}
