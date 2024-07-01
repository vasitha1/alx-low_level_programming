#include  "main.h"

/**
 *  print_rev - function prints a string, in reverse, followed by a new line
 *  @s: Input string parameter
 *
 * Return: nothing (sucess)
*/
void print_rev(char *s)
{
	int length = strlen(s);
	int i = length - 1;

    while (i >= 0) {
	putchar(s[i]);
	i--;
	}
	putchar('\n');
}

/**
 *_strlen - function that returns the length of a string
 * @s: string parameter of function
 *
 *Return: lenght;
 */
int _strlen(char *s)
{
	int c = 0;
	int i = 0;

	while (s[c] != '\0')
	{
		i++;
		c++;
	}

	return (i);
}
