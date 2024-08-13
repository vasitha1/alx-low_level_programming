#include "main.h"

/**
 * closing - Closes all the necessary opened files
 * @o: First file
 * @o2: Second file
 *
 * Return (void)
 */
void closing(int o, int o2)
{
	int c1, c2;

	if (o != -1)
	{
		c1 = close(o);

		if (c1 == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", o);
			exit(100);
		}
	}
	if (o2 != -1)
	{
		c2 = close(o2);

		if (c1 == -1 || c2 == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", o2);
			exit(100);
		}
	}
}

/**
 * check_arguments - checks for the correct number of arguments
 * @argc: Number of arguments
 *
 * Return: void
 */
void check_arguments(int argc)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}


/**
 * check_file_from - Makes sure that the from file can be read
 * @o: flag to check if true or false
 * @file_from: file descriptor
 * @o2: File descriptor of other file to be closed in case we need to exit
 *
 * Return: void
 */
void check_file_from(int o, char *file_from, int o2)
{
	if (o == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		closing(o, o2);
		exit(98);
	}
}


/**
 * check_file_to - Makes sure that the file to can be read
 * @o2: flag to check if true or false
 * @file_to: file to be checked
 * @o: File descriptor of other file to be closed in case we need to exit
 *
 * Return: void
 */
void check_file_to(int o2, int o, char *file_to)
{
	if (o2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);

		closing(o, o2);
		exit(99);
	}
}

/**
 * main - entry point
 * @argc: Argument count
 * @argv: Array of file names
 *
 * Return: 0 (sucess)
 */
int main(int argc, char **argv)
{
	int o, o2, r, w;
	char *file_from, *file_to, *buffer;

	check_arguments(argc);

	file_from = argv[1];
	file_to = argv[2];

	o = open(file_from, O_RDONLY);
	o2 = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);

	check_file_from(o, file_from, o2);
	check_file_to(o2, o, file_to);

	buffer = malloc(1024);
	if (buffer == NULL)
	{
		closing(o, o2);
		return (-1);
	}

	while ((r = read(o, buffer, 1024)) > 0)
	{
		w = write(o2, buffer, r);
		if (w == -1)
			check_file_to(o2, o, file_to);
	}
	if (r == -1)
		check_file_from(o, file_from, o2);

	free(buffer);
	closing(o, o2);
	return (0);
}
