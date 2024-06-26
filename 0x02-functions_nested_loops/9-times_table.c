#include "main.h"

/**
 * times_table - A function that prints the 9 times table, starting with 0.
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

		_putchar('0');/* to handle commas*/
		while (j <= 9)
		{
			int product = i * j;

			/* the if statement is to handle non-single  digit*/
			if (product <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				
				_putchar(product + '0');
			}

			else
			{
				if (j < 9)
				{
					_putchar(',');
					_putchar(' ');
				}
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
			}

				j++;
		}
		_putchar('\n');
		i++;
	}
}
