#include  "main.h"

/**
 * print_line - function that draws a straight line in the terminal.
 * @n: The number times _ is printed
 *
 * Description: The program draws a straight line in the terminal by
 * printing _ till the end of the terminal
 * Return: Always 0 (sucess)
*/
void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		_putchar('_');
		i++;
	}
}
