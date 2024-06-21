#include <stdio.h>

/**
 * main -entry point
 * char lower_case: To track lower case letters
 * char upper_case: To track upper case letters
 *
 * Description: To write the alphabet in both lower and then upper case
 * Return: Always 0 (sucess)
*/
int main(void)
{
	char lower_case = 'a';
	char upper_case = 'A';
	
	/*While loop that prints lower case letters*/
	while (lower_case <= 'z')
	{
		putchar(lower_case);
		lower_case++;
	}

	/*While loop that prints upper case letters*/
        while (upper_case <= 'z')
        {
                putchar(upper_case);
                upper_case++;
        }
	
	putchar('\n');
	return (0);
}
