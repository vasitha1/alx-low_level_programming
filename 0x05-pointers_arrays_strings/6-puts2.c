#include  "main.h"

/**
 * puts2 - function that prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: Input parameter string to be printed
 *
 * Return: Always nothing (sucess)
*/
void puts2(char *str)
{
	int length, i;

	length = 0;
	i = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	while (i < length)
	{
		_putchar(str[i]);
		i += 2
	}

	_putchar('\n');
}
