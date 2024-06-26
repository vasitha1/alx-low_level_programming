#include "main.h"
#include <stdio.h>
/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest = a;
	int i = 1;
	int parameters[] = {a, b, c};

	while (i > 2)
	{
		if (parameters[i] > largest)
			largest = parameters[i];

		i++;
	}
	return (largest);
}
