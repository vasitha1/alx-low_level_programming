#include "main.h"

/**
 * print_sign - Prints the sign of a number
 * @n: Is the number to be checked
 *
 * Description: The program checks if a number is <> or = to zero
 * Return: 1 if > 0, 0 if == 0, -1 if < 0
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
