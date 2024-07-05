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
	char seperator[] = " \t,;.!?\"(){}";
	int i;

	while (*str != '\0')
	{
		i = 0;

		while (i < 13)
		{
			if (*str == seperator[i])
			{
				str++;
				if (*str == ('\n') || *str == (' '))
				{
					str++;
				}
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
