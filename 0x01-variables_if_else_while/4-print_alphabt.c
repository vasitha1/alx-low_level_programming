#include <stdio.h>

/**
 * main -entry point
 * char wanted_letter
 *
 * Description: Prints all wanted letters and excludes q and e
 * Return: Awlays 0 (sucess)
*/
int main(void)
{
	char wanted_letter = 'a';
	/**
	 * While loop Embedded in an If statement to print letters
	 *consecutively and exclude q and e
	*/
	
	while (wanted_letter <= 'z')
	{
		if (wanted_letter == 'q' || wanted_letter == 'e')
		{
			putchar(wanted_letter);
			wanted_letter++;
		}
	}
	putchar('\n');

	return (0);
}
