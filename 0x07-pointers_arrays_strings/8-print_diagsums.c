#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sums of the two diagonals of a square matrix
 * @a: pointer to start of matrix
 * @size: width of matrix column
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, j, sum1, sum2;

	i = 0;
	j = 0;
	sum1 = 0;
	sum2 = 0;

	/*while loop to get diagonal from left to right*/
	while (i < size)
	{
		sum1 += *(((i * size) + i) + a);
		i++;
	}

	/*while loop to get diagonal from right to left*/
	while (j < size)
	{
		sum2 += *(a + (size * j) + (size - 1 - j));

		j++;
	}

	printf("%d, %d\n", sum1, sum2);
}
