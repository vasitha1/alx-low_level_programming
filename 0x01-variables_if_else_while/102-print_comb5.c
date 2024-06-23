#include  <stdio.h>

/**
 * main-entry point
 *
 * Description:Writing a script that creates all combinations of 2 numbers
 * Return: Always 0 (sucess)
*/
int main(void)
{
	int num1_digit1 = 0;

	while (num1_digit1 <= 9)
	{
		int num1_digit2 = 0;

		while (num1_digit2 <= 9)
		{
			int num2_digit1 = 0;

			while (num2_digit1 <= 9)
			{
				int num2_digit2 = 1;
				while (num2_digit2 <= 9)
				{
					putchar(num1_digit1 + '0');
					putchar(num1_digit2 + '0');
					putchar(' ');
					putchar(num2_digit1 + '0');
					putchar(num2_digit2 + '0');
					if (num1_digit1 != 9 || num1_digit2 != 8 ||
					num2_digit1 != 9 || num2_digit2 != 9)
					{
						putchar(',');
						putchar(' ');
					}
					num2_digit2++;
				}
				num2_digit1++;
			}
			num1_digit2++;
		}
		num1_digit1++;
	}
	putchar('\n');
	return (0);
}
