#include "main.h"

/**
 * read_textfile - function reads a text file and prints it to POSIX std output
 * @filename: Name of file
 * @letters: Number of letters to read and print
 *
 * Return: Number of letter which could be read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *buffer;

	if (filename == NULL)
		return (0);
	buffer = malloc(letters);

	if (buffer == NULL)
		return (0);

	o = open(filename, O_RDONLY);

	if (o == -1)
		return (0);
	r = read(o, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	if (r == -1 || w == -1 || w != r)
	{
		free(buffer);
		close(o);
		return (0);
	}
	free(buffer);
	close(o);
	return (w);
}
