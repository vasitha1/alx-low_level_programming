#include  "main.h"

/**
 * print_triangle - Write a function that prints a triangle,
 * followed by a new line.
 * @size: The size of the triangle
 *
 * Description: The program that prints a triangle using spaces and #
 * Return: Always nothing (sucess)
*/
void print_triangle(int size)
{
	int r, s, h;

	if (size > 0)
	{
		r = 1;

		while (r <= size)
		{
			s = size - r;
			while (s > 0)
			{
				_putchar(' ');
				s--;
			}

			h = 0;
			while (h < r)
			{
				_putchar('#');
				h++;
			}
			_putchar('\n');
			r++;
		}

	}
	else
		_putchar('\n');
}
