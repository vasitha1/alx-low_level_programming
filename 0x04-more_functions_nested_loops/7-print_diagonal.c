#include  "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal.
 * @n: Nunber of \ to be drawn
 *
 * Description: The program draws a diagonal line using \ and spaces
 * Return: Always nothing (sucess)
*/
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		i = 0;

		while (i < n)
		{
			j = 0;

			while (j < i)
			{
				_putchar(' ');
				j++;
			}

			_putchar('\\');
			_putchar('\n');
			i++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
