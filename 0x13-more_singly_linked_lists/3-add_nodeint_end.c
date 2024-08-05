#include "lists.h"


/**
 * add_nodeint_end - function that adds a new node at the end of a linked list
 * @head: Pointer to beginning of the node
 * @n: The data of node to be added
 *
 * Return: Adress of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp;

	if (head == NULL)
		return (NULL);

	new = (listint_t *)(malloc(sizeof(listint_t)));

	if (new == NULL)
		return (NULL);


	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	temp = *head;

	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	new->n = n;
	new->next = NULL;
	temp->next = new;

	return (new);
}
