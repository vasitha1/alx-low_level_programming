#include  "main.h"

/**
 * _pow_recursion - function that returns the value of x raised to the power y.
 * @x: First input parameter
 * @y: Second input parameter
 *
 * Return: x raised to the power y(sucess) -1 (error)
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, (y - 1)));
}
