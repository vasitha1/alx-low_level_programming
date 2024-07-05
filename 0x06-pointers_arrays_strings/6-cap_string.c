#include "main.h"

/**
 * cap_string - Capitalises all words of a string
 * @str: String to be capitalised
 *
 * Return: char capitalised string
 */
char *cap_string(char *str)
{
	char *capitalised = str;
	char seperator [] = " \t\n,;.!?\"(){}";
	int i;

	while (*str != '\0')
	{
		i= 0;

		while (i < 13)
		{
			while (*str == seperator[i])
			{
				str++;
				if (*str == '!' || *str == ('\n'))
					str++;

			 	if (*str >= 'a' && *str <= 'z')
				{
					*str = *str - 32;
				}
			}
			i++;
		}

		str++;
	}
	return (capitalised);
}
