#include  "main.h"

/**
 * wildcmp - function that compares two strings
 * @s1: First string input parameter to be compared
 * @s2: Second string input parameter to be compared
 *
 * Return: returns 1 if identical, else  return 0.
*/
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	if (*s1 == '\0' && *s2 == '\0')
		return (0);

	if (*s1 != *s2)
		return (0);

	return (wildcmp((s1 + 1), (s2 + 1)));
}
