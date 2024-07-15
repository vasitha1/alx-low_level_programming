#include  "main.h"
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings.
 * @s1: First string to be added
 * @s2:Second string to be added
 *
 * Return: A pointer to an array (sucess) or NULL (failure)
*/
char *str_concat(char *s1, char *s2)
{
	char *joined;
	int len, len1, len2, i;

	if (s1 == NULL || s2 == NULL)
		return (0);

	len1 = 0;
	len2 = 0;

	/*getting the leength of both s1 + s2*/
	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	len = len1 + len2;

	joined = (char *)malloc(sizeof(char) * (len + 1));

	if (joined == NULL)
		return (0);

	i = 0;

	/*assigning values to space created for concatinated string*/
	while (s1[i] != '\0')
	{
		joined[i] = s1[i];
		i++;
	}
	while (*s2 != '\0')
	{
		joined[i] = *s2;
		s2++;
		i++;

	}
	joined[len] = '\0';

	return (joined);
}
