#include "main.h"

/**
 * Print Alphabet: Writes a function which prints the alphabet 10 times
 *
 * Uses the _putchar function in the main header.
 * Always returns nothing (sucess)
 */
void print_alphabet_x10(void)
{
	char alphabet = 'a';
	int number = 0;/* to track the number of alphabet prints*/

	while (number < 10)
	{
		alphabet = 'a';
		while (number <= 'a')
		{
			_putchar(alphabet);
			alphabet++;
		}
		_putchar('\n');
		number++;
	}
}
