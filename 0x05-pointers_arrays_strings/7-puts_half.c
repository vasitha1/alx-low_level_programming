#include  "main.h"

/**
 * puts_half - function that prints half of a string, followed by a new line.
 * @str: Input string parameter whoes half is printed
 *
 * Return: Always nothing (sucess)
*/
void puts_half(char *str)
{
	int index, half, i;

	index = 0;
	half = index / 2;
	i = (index - 1) / 2;

	while (str[index] != '\0')
		index++;


	if (index % 2 == 0)
	{
		while (str[half] != '0')
	{
		_putchar(str[half]);
		half++;
	}
	else if (index % 2)
	{
		while (i < index - 1)
		{
			_putchar(str[i + 1]);
			i++
		}
	}
	_putchar('\n');
}
