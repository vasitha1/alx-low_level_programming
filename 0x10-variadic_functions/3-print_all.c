#include  "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - function that prints anything.
 * @format: A simbolic representation of data types other arguments
 *
 * Return: void
*/
void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	va_list args;
	char *s;
	char delimiter = 0;

	va_start(args, format);

	while (format && format[i])
	{
		if (format[i] == 'c' || format[i] == 'i' ||
		format[i] == 'f' || format[i] == 's')
		{
			if (delimiter)
				printf(", ");
		(format[i] == 'c') ? printf("%c", va_arg(args, int)) :
		(format[i] == 'i') ? printf("%d", va_arg(args, int)) :
		(format[i] == 'f') ? printf("%f", va_arg(args, double)) :
		(format[i] == 's') ? (s = va_arg(args, char *), printf("%s", s ? s :
		"(nil)")) : 0;

		delimiter = 1;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
