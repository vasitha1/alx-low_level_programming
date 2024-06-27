#include "main.h"

/**
 * print_times_table -  a function that prints the n times table,
 * starting with 0.
 * @n: int whose time table will be printed
 *
 * Description: The program prints the n times table, starting with 0.
 * when n is less than 15 and greater than zero
 * Return: Always nothing (sucess)
*/
void print_times_table(int n)
{
	/*i stops program from continuing if n is not between 0 and 15*/
	if (n < 15 && n > 0)
	{
		_putchar('0');
		int i = 0;

		/*to keep track of the columns*/
		while (i <= n)
		{
			int j = 1;
			int product = i * j;

			while (j <= n)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');

				/*fixes differences with double,single digits*/
				if (n > 9)
					_putchar((product / 10) + '0');
				else
					_putchar(' ');
				_putchar((product % 10) + '0');
				
				j++;
			}
			_putchar('\n');
			i++;
		}
	}
}


