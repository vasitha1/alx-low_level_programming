#include  "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * main-entry point
 * @argc: Argument count
 * @argv: Argument vector(Array of arguments)
 *
 * Description: The program  multiplies two positive numbers.
 * Return: Always 0 (sucess)
*/
int main(int argc, *argv[])
{
	int product;

	if(argc != 3 || !isdigit(*argv[1]) || !isdigit(*argv[2])
	{
		printf("Error\n");
		exit(98);
	}
	product = *argv[1] * *argv[2];

	printf("%d\n", product);

	return (0);
}
