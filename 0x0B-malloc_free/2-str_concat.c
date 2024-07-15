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
	int len, len1, len2, i, j;

	len1 = 0;
	len2 = 0;
	i = 0;
	j = 0;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	/*getting the leength of both s1 + s2*/
	if (s1 != NULL)
		while (s1[len1] != '\0')
		{
			len1++;
		}
	if (s2 != NULL)
		while (s2[len2] != '\0')
		{
			len2++;
		}
	len = len1 + len2;
	joined = (char *)malloc(sizeof(char) * (len + 1));

	if (joined == NULL)
		return (NULL);
	while (i < len1)
	{
		joined[i] = s1[i];
		i++;
	}
	while (j < len2)
	{
		joined[i] = s2[j];
		j++;
		i++;
	}
	joined[len] = '\0';

	return (joined);
}
