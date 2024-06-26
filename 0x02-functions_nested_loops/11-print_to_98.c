#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98,
 * followed by a new line
 * @n: Is where the counting begins
 *
 * Description: The program starts printing from n which
 * can either be possitive or negative to end at 98
 * Return: Always nothing (success)
*/
void print_to_98(int n)
{
	while (n != 98)
	{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
		if (n > 98)
			n--;
		else
			n++;
	}
	_putchar((98 / 10) + '0');
	_putchar((98 % 10) + '0');
	_putchar('\n');
}
