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
	char seperator[] = " \t,\n;.!?\"(){}";
	int i;

	while (*str)
	{
		i = 0;

		while (i < 12)
		{
			if (*str == seperator[i])
			{
				str++;
				if (*str == ('\n') || (*str == seperator[i] && *str != (' ')))
				{
					str++;	
				}
				if (*str >= 'a' && *str <= 'z')
				{
					*str -= 32;
				}
			}
			i++;
		}
		str++;
	}
	return (capitalised);
}
