#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main -entry point
 * n: number to be checked
 *
 * Description: Checking if n is positive or negative equal to zero
 * Return: Always 0 (sucess)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/**
	 *  your code goes there
	 *  If statement verifying the sign of n
	*/
	if (n > 0)
		printf("%d is positive", n);
	else if (n = 0)
		printf("%d is zero", n);
	else (n < 0)
		printf("%d is negative", n);
	return (0);
}
