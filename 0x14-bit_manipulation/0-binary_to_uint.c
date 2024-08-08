#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int.
 * @b: Pointer to a string of 0 and 1 chars
 *
 * Return: converted number or 0 if there is a non 0 or 1 char in *b
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, j, decimal;

	if (b == NULL)
		return (0);
	i = 0;

	while (*b != '\0')
	{
		if (*b != 0 && *b != 1)
		       return (0);
		i++;
	}

	j = 1;

	while (b[i]--)
	{
		decimal += ((b[i]) * j);
		j *= 2;
	}
	return (decimal);
}
