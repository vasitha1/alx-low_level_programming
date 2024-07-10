#include  "main.h"

/**
 * is_prime_number - function returns 1 if input integer is prime, else 0
 * @n: int parameter to be checked
 *
 * Return: 1 if prime, else 0
*/
int is_prime_number(int n)
{
	if (n < 0)
		return (0);

	if (n == 1)
		return (0);

	if (n == 2 || n == 3 || n == 5 || n == 7)
		return (1);

	if ((n % 2) != 0 && (n % 3) != 0 && (n % 5) != 0 && (n % 7) != 0)
		return (1);

	return (0);
}
