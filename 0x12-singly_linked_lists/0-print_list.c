#include "lists.h"
#include <stdio.h>

/**
 * print_list - function that prints all the elements of a list_t list.
 * @h: Linked list whose elements are to be printed
 *
 * Return: Number of nodes
 */
size_t print_list(const list_t *h)
{
	int j;

	j = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		j++;
	}
	return (j);
}
