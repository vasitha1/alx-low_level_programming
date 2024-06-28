#include  <stdio.h>

/**
 * main - entry point
 *
 * Description: The program prints the highest prime factor of 612852475143
 * Return: Always 0 (sucess)
*/
int main(void)
{
	long int i = 3;
	long n = 612852475143;

	while (i < 782849)
	{
		while ((n % i == 0) && (n != i))
			n = n / i;
		i = i + 2;
	}
	printf("%lu\n", n);
	return (0);
}
