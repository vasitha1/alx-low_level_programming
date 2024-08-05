#include "lists.h"

/**
 * listint_len - function that returns the number of elements of a linked list
 * @h: Linked list whose nodes are to be counted
 *
 * Return: Number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
