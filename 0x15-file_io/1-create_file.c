#include "main.h"

/**
 * create_file - Function that creates a file
 * @filename: The name of the file to be created
 * @text_content: The text to be written into the file
 *
 * Return: 1 on sucess and -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int o, w, n;

	if (filename == NULL)
		return (-1);
	n = 0;

	if (text_content != NULL)
	{
		while (*text_content != '\0')
		{
			n++;
			text_content++;
		}

	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (o == -1)
		return (-1);

	w = write(o, text_content, n);

	if (w == -1 || w != n)
	{
		close(o);
		return (-1);
	}
	close(o);
	return (1);
}
