#include "lists.h"

/**
 * pop_listint - function deletes the head node of a listint_t linked list.
 * @head: Pointer to the inked list
 *
 * Return: the head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *new;
	int data;

	if (head == NULL || *head == NULL)
		return (0);

	new = *head;
	*head = new->next;
	data = new->n;

	free(new);

	return (data);
}
