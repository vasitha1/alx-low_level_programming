#include "main.h"

/**
 * print_alphabet -  prints the alphabet, in lowercase, followed by a new line.
 *
 * Description: This creates a function to print the alphabet. 
 * Prototype: void print_alphabet(void);
 * You can only use _putchar twice in your code
 * Return: Nothing
 */
void print_alphabet(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		alphabet++;
	}
	_putchar('\n');
}
