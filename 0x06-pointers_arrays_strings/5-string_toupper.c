#include  "main.h"

/**
 * string_toupper - changes all lower case letters of a string to uppercase.
 * @str: string to be changed
 *
 * Return: char pointer upper
 */

char *string_toupper(char *str)
{
	char *upper = str;

	while (*str != '\0')
	{
		if (*str >= 97 && *str <= 122)
			*str = *str - 32;
		str++;
	}
	return (upper);
}
