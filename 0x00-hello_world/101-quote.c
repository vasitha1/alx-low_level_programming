#include <unistd.h>

/**
 * main -entry point
 *
 * Description: Prints a message to standard error
 * Return: always 1 (success)
*/
int main(void)
{
	char *message = "and that piece of art is \
	useful\" - Dora Korpar, 2015-10-19\n";

	write(2, message, 59);
	return (1);
}
