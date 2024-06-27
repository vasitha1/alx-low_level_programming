#include <stdio.h>

/**
 * natural - Computes and prints the sum of multiples of 3 or 5 below 1024
 *
 * Return: Always 0 (sucess)
*/
int natural(void)
{
	int sum = 0;
	int i = 0;

	while (i < 1024)
	{
		if (i % 5 == 0 || i % 3 == 0)
		{
			sum += i;
		}
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
