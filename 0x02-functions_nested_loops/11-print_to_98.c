#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98,
 * followed by a new line
 * @n: Is where the counting begins
 *
 * Description: The program starts printing from n to 98
 * Return: Always nothing (success)
*/
void print_to_98(int n)
{
	while (n < 98)
	{
		_putchar(n + '0');
		n++;
	}
	_putchar('\n');
}
