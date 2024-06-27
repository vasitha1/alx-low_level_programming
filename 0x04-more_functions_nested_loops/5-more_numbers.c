#include  "main.h"

/**
 * more_numbers - function that prints 10 times the numbers,
 * from 0 to 14, followed by a new line.
 *
 * Description: The program prints from 0 to 14 ten times each followed by a
 * new line
 * Return: Always nothing (sucess)
*/
void more_numbers(void)
{
	int i = 0;

	while (i < 9)
	{
		int j = 0;

		while (j <= 14)
		{
			_putchar(j + '0');
			j++;
		}
		i++;
	}
}
