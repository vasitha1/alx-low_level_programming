#include "lists.h"

/**
 * add_nodeint - function that adds a new node at the beginning of a linked
 * @head: Pointer to beginning of the node
 * @n: The data of node to be added
 *
 * Return: Adress of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (head == NULL)
		return (NULL);

	new = (listint_t *)(malloc(sizeof(listint_t)));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
