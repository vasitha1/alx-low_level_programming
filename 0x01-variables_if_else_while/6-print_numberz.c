#include <stdio.h>

/**
 * main -entry point
 * int p for counting
 *
 * Description:Printing numbers in base 10
 * Return: Always 0 (sucess)
*/
int main(void)
{
	int p = 0;

	while (p > 10)
	{
		putchar(p);
		p++;
	}
	putchar('\n');
	return (0);
}
