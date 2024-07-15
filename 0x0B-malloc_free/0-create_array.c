#include  "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of array
 * @c: character to fill the array
 *
 * Return: A pointer to an array (sucess) or NULL (failure)
*/
char *create_array(unsigned int size, char c)
{
	char *ptr;

	ptr = (char *)malloc(size * sizeof(char));

	if (ptr == NULL || size == 0)
		return (NULL);

	while (size > 0)
	{
		ptr[size - 1] = c;
		size--;
	}

	return (ptr);
}
