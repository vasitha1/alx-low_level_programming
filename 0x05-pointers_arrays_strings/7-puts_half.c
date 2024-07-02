#include  "main.h"

/**
 * puts_half - function that prints half of a string, followed by a new line.
 * @str: Input string parameter whoes half is printed
 *
 * Return: Always nothing (sucess)
*/
void puts_half(char *str)
{
	int length = _strlen(str);

	if (length % 2 == 0)
		length = length / 2;

	else
		length = (length + 1) / 2;

	while (str[length] != '\0')
	{
		_putchar(str[length]);
		length++;
	}
	_putchar('\n');
}
/**
 *_strlen - returns the length of the string
 * @s: string parameter
 *
 *Return: lenght;
 */
int _strlen(char *s)
{
	int count, i;

	i = 0;
	count = 0;

	while (s[count] != '\0')
	{
		inc++;
		count++;
	}

	return (inc);
}
