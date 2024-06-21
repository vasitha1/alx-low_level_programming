#include <stdio.h>

/**
 * main -entry point
 * char alphabet keeps count of the alphabet
 *
 * Description: Creates a game that prints all letters of the alphabet
 * Return: Always 0 (sucess)
*/
int main(void)
{
	/**
	 * creating a loop that will print the subsequent letter at each cycle
	*/
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
	return (0);
}
