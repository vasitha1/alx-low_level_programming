#include "lists.h"

/**
 * delete_nodeint_at_index - function deletes node at index of a linked list.
 * @head: Pointer to head node
 * @index: Index of node to be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr, *temp;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	i = 0;
	ptr = *head;

	while (i < (index - 1))
	{
		if (ptr == NULL)
			return (-1);
		i++;
		ptr = ptr->next;
	}
	if (ptr == NULL || ptr->next == NULL)
		return (-1);

	temp = ptr->next;
	ptr->next = temp->next;

	free(temp);
	return (1);
}
