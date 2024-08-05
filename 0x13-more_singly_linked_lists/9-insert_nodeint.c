#include "lists.h"

/**
 * insert_nodeint_at_index - function inserts a new node at a given position.
 * @head: Pointer to head node
 * @idx:  index of the list where the new node should be added
 * @n: The data to be included in the new node
 *
 * Return: Adress of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *temp;
	unsigned int i;

	i = 0;
	temp = *head;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	while (temp != NULL && i < (idx - 1))
	{
		i++;
		temp = temp->next;
	}

	if (temp == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	new->next = temp->next;
	temp->next = new;

	return (new);
}
