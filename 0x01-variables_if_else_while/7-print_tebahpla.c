#include <stdio.h>

/**
 * main -entry point
 * cha reverse: For keeping track of letters
 *
 * Description: To write letters in descending order
 * Return: Always 0 (sucess)
*/
int main(void)
{
	char reverse = 'z';

	while (reverse >= 'a')
	{
		putchar(reverse);
		reverse--;
	}
	putchar('\n');
	return (0);
}
