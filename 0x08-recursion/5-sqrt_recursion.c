#include  "main.h"

/**
 * _sqrt_recursion - function that returns the natural square root of a number.
 * @n:input int parameter whose sqare root is to be returned
 * 
 * Return: Square root if it is a natural number (sucess) and -1 otherwise
*/
int _sqrt_recursion(int n)
{
	return (_sqrt_helper(n, 1));
}

/**
 * _sqrt_helper - recursive helper function to find the square root
 * @n: input int parameter whose square root is to be calculated
 * @odd: current odd number
 * 
 * Return: Square root if it is a natural number (success) and -1 otherwise
*/
int _sqrt_helper(int n, int odd)
{
	if (n < 0 || n < odd)/*checking natural numbers*/
		return (-1);

	if (n == 0)
		return (0);

	if (n == odd)
		return (1);

	return (1 + _sqrt_helper((n - odd), (odd + 2)));
}
