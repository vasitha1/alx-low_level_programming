#include  "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main-entry point
 * @argc: Argument count
 * @argv: Argument vector(Array of arguments)
 *
 * Description: The program program that adds positive numbers.
 * Return: Always 0 (sucess)
*/
int main(int argc, char *argv[])
{
	int sum = 0;
	int i = 1;

	while (i < argc)
	{

		if (atoi(argv[i]) == 0 && argv[i][0] != '0')
		{
			printf("Error\n");
			return (1);
		}

		sum += atoi(argv[i]);

		i++;

	}

	printf("%d\n", sum);
	return (0);
}
