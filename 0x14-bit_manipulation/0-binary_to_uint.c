#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int.
 * @b: Pointer to a string of 0 and 1 chars
 *
 * Return: converted number or 0 if there is a non 0 or 1 char in *b
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int j, decimal;
	int i;

	if (b == NULL)
		return (0);
	i = 0;

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		i++;
	}

	i--;
	j = 1;
	decimal = 0;

	while (i >= 0)
	{
		if (b[i] == '1')
			decimal += j;
		j *= 2;

		i--;
	}
	return (decimal);
}
