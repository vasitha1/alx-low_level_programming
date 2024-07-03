#include  "main.h"

/**
 * _strcat - function that concatenates two strings.
 * @dest: First input parameter string
 * @src: Second input that is appended to dest
 *
 * Description: The program makes use of _putchar inorder to append 2 strings
 * Return: Appended string
*/
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;

	/* while loop that counts the length of dest*/
	while (dest[i] != '\0')
	{
		i++;
	}
	i += 1;/*because the index of src starts with 0*/

	/*while loop that adds the characters of src sucessively*/
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	/* adds a null character to the end ommited by  formal loop*/
	dest[i + 1] = '\0';

	return (dest);
}
