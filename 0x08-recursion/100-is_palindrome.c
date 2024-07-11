#include "main.h"

/**
 * _strlen - determines the length of a string.
 * @s: the string input parameter to be couted
 * Return: int length of the string
 */
int _strlen(char *s)
{
	if (*s)
	{
		s++;
		return (1 + _strlen(s));
	}
	return (0);
}


/**
 * is_same - function verifies if is_palindrome
 * @str: input string parameter
 * @strlen: string length
 * @i: counter
 * Return: 1 if string is a palindrome, 0 if it is not.
 */
int is_same(char *str, int strlen, int i)
{
	if (i >= strlen)
		return (1);
	if (str[strlen] == str[i])
		return (is_same(str, strlen - 1, i + 1));
	return (0);
}

/**
 * is_palindrome - function that checks if a string is a palindrom
 * @s: String input parameter to be checked
 *
 * Return: returns 1 if a string is a palindrome and 0 if not.
*/
int is_palindrome(char *s)
{
	int n = _strlen(s);
	int i = 0;

	return (is_same(s, n - 1, i));
}
