#include  "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings.
 * @s1: First string to be concatinated
 * @s2: Second string parameter to be added on s1
 * @n: Int parameter representing the number of bytes of s2 to be added on s1
 *
 * Return: A pointer to an array (sucess) or NULL (failure)
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k, sum;
	char *ptr;

	i = 0;
	j = 0;

	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	if (j > n)
	{
		sum = i + n;
		j = n;
	}
	else
		sum = i + j;
	ptr = malloc((sum * sizeof(char)) + 1);

	if (ptr == NULL)
		return (NULL);
	for (k = 0; k <= i && i != 0; k++)
	{
		ptr[k] = s1[k];
	}

	for (k = 0; k <= j && j != 0; k++)
	{
		ptr[i + k] = s2[k];
	}
	ptr[i + k] = '\0';

	return (ptr);
}
