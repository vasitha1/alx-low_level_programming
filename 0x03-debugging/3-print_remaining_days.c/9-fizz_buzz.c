#include <stdio.h>

/**
 * main - entry point
 *
 * Description: The program writes counts from 1 to 100 replacing multiples of
 * 3 with fizz, 5 with Buzz and both with FizzBuzz
 * Return: Always 0 (sucess)
*/
int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
		{
			if ((i % 3) == 0)
			{
				printf("Fizz");
			}
			if ((i % 5) == 0)
			{
				printf("Buzz");
			}
		}
		else
		{
			printf("%d", i);
		}
		if (i != 100)
			printf(" ");
		i++;
	}
	printf("\n");
	return (0);
}
