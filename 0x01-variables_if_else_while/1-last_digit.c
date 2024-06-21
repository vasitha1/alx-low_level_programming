#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -entry point
 * n:number being checked
 *
 * Description:Checkes the last digit of a number
 * Return: Always 0 (sucess)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/**
	 * int n is the number provided which will be checked
	 * n % 10 finds the last digit by getting the remainder when divided by 10
	*/
	if (n % 10 > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, n % 10);
	}
	else if (n % 10 == 0)
	{
		printf("Last digit of %d is 0 and is 0\n", n);
	}
	else
	{
		printf(
		"Last digit of %d is %d and is less than 6 and not 0\n", n, n % 10
		);
	}
	return (0);
}
