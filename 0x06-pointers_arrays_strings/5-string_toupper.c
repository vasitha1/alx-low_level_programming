#include  "main.h"

 /**
 *string_toupper - function that changes all lowercase letters of a
 string to uppercase.
 *@s: string to be changed
 *
 * Description: The program uses ASCII values to verify if a character is
 * lower case and if so, it adds 20 to the value making it upper as per ASCII
 * table
 * Return: Character pointer to the uppercase string (sucess)
*/
char *string_toupper(char *s)
{
	char *upper = s;

	while (*s != '\0')
	{
		if (*s >= 97 && *s <= 122)
			*s = *s - 32;
		s++;
	}
	return (upper);
}
