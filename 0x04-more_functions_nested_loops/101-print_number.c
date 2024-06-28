#include  "main.h"

/**
 * print_number - Write a function that prints an integer.
 * @n: int parameter
 *
 * Description: The program prints an integer
 * Return: Always 0 (sucess)
*/
void print_number(int n)
{
	int t = n;

	if (n < 0)
	{
		_putchar(45);
		t = -t;
	}
	if (t / 10)
	{
		print_number(t / 10);
	}
	_putchar(t % 10 + '0');
	_putchar('\n');
}
