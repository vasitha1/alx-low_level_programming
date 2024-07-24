#include  "function_pointers.h"


/**
 * print_name - function that prints a name.
 * @name: Name to be printed
 * @f: Pointer to function parameter
 *
 * Return: A pointer to an array (sucess) or NULL (failure)
*/
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
