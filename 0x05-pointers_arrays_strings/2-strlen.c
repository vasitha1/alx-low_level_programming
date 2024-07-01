#include  "main.h"

/**
 * _strlen - function that returns the length of a string.
 * @s: String input parameter
 *
 * Return: length
*/
int _strlen(char *s)
{
	int i = 0;
	for (int c = 0; s[c] != '\0'; c++)
	i++;

	return (i);
}
