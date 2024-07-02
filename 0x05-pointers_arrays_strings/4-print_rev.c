#include  "main.h"

/**
 *  print_rev - function prints a string, in reverse, followed by a new line
 *  @str: Input string parameter
 *
 * Return: nothing (sucess)
*/
void print_rev(char *str)
{
	int length = 0;
	int idx = 0;

	length = _strlen(str);

	while (idx < length)
	{
	    _putchar(str[length - 1 - idx]);
	    idx++;
	}
	_putchar('\n');
}
/**
 *_strlen - function that returns the length of a string
 * @s: string parameter of function
 *
 *Return: lenght;
 */
int _strlen(char *s)
{
	int count = 0;
	int length = 0;

	while (s[count] != '\0')
	{
		length++;
		count++;
	}

	return (length);
}
