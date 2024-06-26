#include "main.h"

/**
 * time_table - Write a function that prints the 9 times table, starting with 0.
 *
 * Description: The program prints the 9 time table starting with zero
 * Return: Always nothing (sucess)
 */
void times_table(void)
{
	int i = 0;/*keeps track of the colums*/

	while (i <= 9)
	{
		int j = 0;/*keeps track of the rows*/

		while (j <= 9)
		{
			int product = i * j;
			_putchar(product);
			_putchar(',');
			_putchar(' ');
			j++;
		}
		_putchar('\n');
		i++;
	}
}
