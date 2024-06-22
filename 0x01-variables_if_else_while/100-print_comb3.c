#include <stdio.h>

/**
 * main -entry point
 *
 * Description:
 * Return: Always 0 (sucess)
*/
int main(void)
{
	int one = 0;
	int two = 1;

	while (one < 9)
	{
		putchar(one + '0');
		while (two < 9)
		{
			putchar(two + '0');
			if (one !=8 || two != 9)
			{
				putchar(' ');
				putchar(',');
			}
			two++;
		}
		one++;

		two = one + 1;

	}
	putchar('\n');
	return (0);
}
