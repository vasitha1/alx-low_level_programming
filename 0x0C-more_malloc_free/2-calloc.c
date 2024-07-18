#include  "main.h"
#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array, using malloc.
 * @nmemb: number of elements
 * @size: size of element
 *
 * Return: A pointer to an array (sucess) or NULL (failure)
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < nmemb * i; i++)
	{
		ptr[i] = '0';
	}
	return (ptr);
}
