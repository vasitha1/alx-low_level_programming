#include  "function_pointers.h"

/**
 * int_index - function that searches for an integer.
 * @array: Array of ints
 * @size: Size of array
 * @cmp: pointer to function
 *
 * Return: Index of the first  element for which the cmp function does not
 * return 0 (sucess) else -1 (failure)
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) !=  0)
			return (i);
	}
	return (-1);
}
