#include  <stdio.h>

/**
 *  * main-entry point
 *
 * Description:Writing a function that prints all bosible combinations of three
 * digit numbers
 * Return: Always 0 (sucess)
*/
int main(void)
{
	int first_digit = 0;
	int second_digit = 1;
	int third_digit = 2;

	while (first_digit <= 9)
	{
		while (second_digit <= 9)
		{
			if (second_digit == first_digit)			{
				second_digit++;

			while (third_digit <= 9)
			{
				if (third_digit == second_digit || third_digit == first_digit)
					third_digit++;
			}
			putchar(first_digit + '0');
			putchar(second_digit + '0');
			putchar(third_digit + '0');
			/* print comma and spaces */
			if (third_digit == 9)
			{
				putchar(' ');
				putchar(',');
			}
			third_digit++;
		}
		second_digit++;
	}
	first_digit++;
	}
	putchar('\n');
	return (0);
}
