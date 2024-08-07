#include "lists.h"

/**
 * print_listint - function that prints the elements of a linked list
 * @h: Linked list whose elements are to be printed
 *
 * Return: Number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
