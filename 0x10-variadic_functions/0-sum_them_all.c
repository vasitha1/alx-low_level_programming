#include  "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: Number of arguments
 *
 * Return: Sum of arguments (sucess)
*/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list addends;

	if (n == 0)
		return (0);

	va_start(addends, n);

	i = 0;
	sum = 0;

	while (i < n)
	{
		sum += va_arg(addends, int);
		i++;
	}
	va_end(addends);
	return (sum);
}
