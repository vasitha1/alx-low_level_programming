#include  "main.h"

/**
 * rev_string - function prints a string, in reverse, followed by a new line
 * @s: Input parameter string
 *
 * Return: Always nothing (sucess)
*/
void rev_string(char *s)
{
	char tmp;
	int i, len1, len2;

	len1 = 0;
	len2 = 0;
	i = 0;

	while (s[len1] != '\0')
	{
		len1++;
	}

	len2 = len1 - 1;

	while (i < len / 2)
	{
		tmp = s[i];
		s[i] = s[len2];
		s[len2--] = tmp;
		i++;
	}
}
