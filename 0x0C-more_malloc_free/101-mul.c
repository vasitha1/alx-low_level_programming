#include  "main.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * main-entry point
 * @argc: Argument count
 * @argv: Argument vector(Array of arguments)
 *
 * Description: The program  multiplies two positive numbers.
 * Return: Always 0 (sucess)
*/
int main(int argc, char *argv[])
{
	int product;

	if(argc != 3 || !isdigit(*argv[1]) || !isdigit(*argv[2]))
	{
		printf("Error\n");
		exit(98);
	}
	product = atoi(argv[1]) * atoi(argv[2]);

	printf("%d\n", product);

	return (0);
}
