#include  "main.h"

/**
 * puts_half - function that prints half of a string, followed by a new line.
 * @str: Input string parameter whoes half is printed
 *
 * Return: Always nothing (sucess)
*/
void puts_half(char *str)
{
	int index, half;

	index = 0;
	half = index / 2;

	while (str[index] != '\0')
		index++;


	if (index % 2 == 1)
		half++;

	while (half < index)
	{
		_putchar(str[half]);
		half++;
	}
	_putchar('\n');
}
