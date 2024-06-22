#include <stdio.h>

/**
 * main -entry point
 * int hex: To track the number
 *
 * Description: To know print headecimal numbers
 * Return: Always 0 (sucess)
*/
int main(void)
{
	char hex[] = "0123456789abcdef";

	int i = 0;

	while (i < 16)
	{
		putchar(hex[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
