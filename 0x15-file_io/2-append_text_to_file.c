#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: Name of the file
 * @text_content: The text to be appended
 *
 * Return: 1 on sucess and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, n;

	if (filename == NULL)
		return (-1);
	n = 0;

	if (text_content != NULL)
	{
		while (text_content[n] != '\0')
		{	
			n++;
		}
	}
	o = open(filename, O_WRONLY | O_APPEND);

	if (o == -1)
		return (-1);

	if (text_content != NULL)
		w = write(o, text_content, n);

	close(o);
	if (w == -1)
		return (-1);
	return (1);
}
