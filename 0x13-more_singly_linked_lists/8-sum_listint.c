#include "lists.h"

/**
 * sum_listint - function returns the sum of all the data (n) of a linked list.
 * @head: pointer to head node
 *
 * Return: Sum of all the data
 */
int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum;

	if (head == NULL)
		return (0);

	temp = head;
	sum = 0;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
