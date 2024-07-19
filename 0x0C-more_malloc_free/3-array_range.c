#include  "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers.
 * @min: Min number inclussive
 * @max: Max number inclussive
 *
 * Return: Pointer to an array ints from min to max (sucess) or NULL (failure)
*/
int *array_range(int min, int max)
{
	int *ptr, i, j, size;

	size = (max - min) + 1;
	j = 0;

	if (min > max)
		return (NULL);
	ptr = malloc(size * sizeof(int));

	if (ptr == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
	{
		ptr[j] = i;
		j++;
	}
	return (ptr);
}
