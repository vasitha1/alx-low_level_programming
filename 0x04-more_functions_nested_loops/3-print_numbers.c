#include "main.h"

/**
 * print_numbers -  function that prints the numbers, from 0 to 9,
 * followed by a new line
 *
 * Description: The program prints numbers using function _putchar from main.h
 * Return: Always nothing (sucess)
*/
void print_numbers(void)
{
	int i = 0;
	while (i <= 9)
	{
		_putchar(i + '0');
		i++;
	}
}
