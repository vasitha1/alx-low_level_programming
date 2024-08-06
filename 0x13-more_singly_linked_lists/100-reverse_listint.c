#include "lists.h"

/**
 * reverse_listint - Function that reverses a linked-list
 * @head: Pointer to pointer of head node
 *
 * Return: Pointer to pointer of list to be reversed
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next, *prev;

	prev = NULL;

	if (head == NULL || *head == NULL)
		return (NULL);
	if ((*head)->next == NULL)
		return (*head);

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;

	return (next);
}
