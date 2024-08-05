#include "lists.h"

/**
 * get_nodeint_at_index - function returns nth node of a listint_t linked list.
 * @head: Pointer to the head node
 * @index:  index of the node, starting at 0
 *
 * Return: a pointer to the nth node at index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int i, flag;

	if (head == NULL)
		return (NULL);

	i = 0;
	flag = 0;
	temp = head;

	while (temp != NULL && flag == 0)
	{
		if (i == index)
		{
			flag++;
			break;
		}
		i++;
		temp = temp->next;
	}
	if (flag == 0)
		return (NULL);
	return (temp);
}
