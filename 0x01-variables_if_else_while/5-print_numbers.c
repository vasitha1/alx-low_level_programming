#include <stdio.h>

/**
 * main -entry point
 * int i counts numbers
 *
 * Description: Writes a program that counts numbers in base 10 from 0
 * Return: Always 0 (sucess)
*/
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		printf("%d", i);
		i++;
	}
	printf ("\n");
	return (0);
}
