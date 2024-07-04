#include  "main.h"

/**
 *reverse_array - function that reverses the content of an array of integers.
 * @a: Pointer to first character of intergers
 * @n: number of elements of the array
 *
 * Return: Always 0 (sucess)
*/
void reverse_array(int *a, int n)
{
	int rev;
	int i;

	i = n - 1;

	while (i > n / 2)
	{
		rev = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = rev;
		i--;
	}
}
