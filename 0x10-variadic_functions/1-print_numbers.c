#include  "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - function that prints numbers, followed by a new line
 * @seperator:  string to be printed between numbers
 * @n: number of integers passed to the function
 *
 * Return: void
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int i;

	va_start(num, n);

	i = 0;

	while (i < n)
	{
		printf("%d", va_arg(num, int));
		if (separator != NULL && i != (n -1))
			printf("%s", separator);

		i++;
	}
	printf("\n");
}
