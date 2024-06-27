#include  "main.h"

/**
 * print_square - a function that prints a square, followed by a new line
 * @size: Size of #
 *
 * Description: The program prints a squared number of #
 * Return: Always nothing (sucess)
*/
void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		i = 0;

		while (i < size)
		{
			j = 0;

			while (j < size)
			{
				_putchar('#');
				j++;
			}
			_putchar('\n');
			i++;
		}
	}
	else
	{
		_putchar('\n');
	}
}

