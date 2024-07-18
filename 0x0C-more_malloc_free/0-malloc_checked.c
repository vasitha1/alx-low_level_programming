#include  "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory using malloc.
 * @b: Int for which memory should be allocated
 *
 * Return: A pointer to memory allocated (sucess) or 98 (failure)
*/
void *malloc_checked(unsigned int b)
{
	int *ptr;

	if (b != 0)
		ptr = malloc(b);

	if (b == 0 || ptr == NULL)
		exit(98);

	return (ptr);
}
