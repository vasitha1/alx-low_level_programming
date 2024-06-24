#include  <stdio.h>

/**
 * main-entry point
 *
 * Description:Writing a script that creates all combinations of 2 numbers
 * Return: Always 0 (sucess)
*/
int main(void)
{
	int num1 = 0;
	int comma = 44;
	int space = 32;
	int num2 = 1;

	while (num1 < 99)
	{
		num2 = num1 + 1;
		while (num2 <= 99)
		{
			putchar((num1/10) + '0');
			putchar((num1 % 10) + '0');
			putchar(space);
			putchar((num2/10) + '0');
			putchar((num2 % 10) + '0');
			if (num1 != 98 || num2 != 99)
			{
				putchar(comma);
				putchar(space);
			}
			num2++;
		}
		num1++;
	}
	putchar('\n');
	return (0);
}
