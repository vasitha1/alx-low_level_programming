#include  "main.h"
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a newly allocated space in
 * memory, which contains a copy of the string given as a parameter.
 * @str: String to be copied
 *
 * Return: pointer to copy of new string (sucess) or NULL (failure)
*/
char *_strdup(char *str)
{
	char *copy;
	int i;

	int size = 0;

	if (str == NULL)
		return (0);

	while (str[size] != '\0')
	{
		size++;
	}
	i = size++;/**to keep track of the last character*/
	copy = (char *)malloc((sizeof(char) * size) + 1);

	if (copy == NULL)
		return (0);

	while (size > 0)
	{
		copy[size - 1] = str[size - 1];

		size--;
	}

	copy[i] = '\0';

	return (copy);
}
