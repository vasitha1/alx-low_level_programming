#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint -  function prints all the elements of a dlistint_t list.
 * @h: Head of linked list
 *
 * Return: Number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *temp = h;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		count++;
		temp = temp->next;
	}
	return (count);

}
