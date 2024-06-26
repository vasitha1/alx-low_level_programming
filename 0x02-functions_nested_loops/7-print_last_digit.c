#include "main.h"

/**
 * print_last - prints last digit of a number
 *@n: Is an int that enters to the function for verification
 *
 * Description: The program prints the last digit by finding the % 10
 * Return: Always last digit
*/
int print_last_digit(int n)
{
	int last_digit = n % 10;
	if (last_digit < 0)
		last_digit *= -1;
	_putchar(last_digit + '0');

	return (last_digit);
}
