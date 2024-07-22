#include  "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - function that reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated with a call to old size.
 * @old_size: size, in bytes, of the allocated space for ptr
 * @new_size: new size, in bytes of the new memory block
 *
 * Return: A pointer to new block of memory(success) or NULL (failure)
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (old_size == new_size)
		return (ptr);

	new_ptr = malloc(new_size * sizeof(char));

	if (new_ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		free(ptr);
		return (new_ptr);
	}
	if (old_size < new_size)
		strncpy(new_ptr, ptr, old_size);
	else
		strncpy(new_ptr, ptr, new_size);

	free(ptr);
	return (new_ptr);
}
