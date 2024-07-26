#include  "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - function that prints strings, followed by a new line.
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 *
 * Return: Void
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list strings;

	va_start(strings, n);

	if (separator == NULL)
		separator = "";
	i = 0;

	while (i < n)
	{
		str = va_arg(strings, char*);
		if (str == NULL)
			printf("nil");
		printf("%s", str);

		if (i != (n - 1))
			printf("%s", separator);
		i++;
	}
	va_end(strings);

	printf("\n");
}
