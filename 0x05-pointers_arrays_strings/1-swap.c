#include  "main.h"

/**
 * swap_int -  function that swaps the values of two integers.
 * @a: First input integer parameter
 * @b: Second input integer parameter
 *
 * Description: The program swaps the values pointed to by two integer pointers
 * Return: Always nothing (sucess)
*/
void swap_int(int *a, int *b)
{
	/**
	 * Store the value pointed to by 'a' in a temporary variable 'tmp'
	 * Update the value pointed to by 'a' with the value pointed to by 'b'
	 * Then update the value pointed to by 'b' with the original value of 'a'
	 */
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
