#include "lists.h"

/**
 * print_listint_safe - function that prints a listint_t linked list.
 * @head: Pointer to a head node
 *
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count;
	const listint_t *fast, *slow, *ptr1, *ptr2;

	if (head == NULL)
		exit(98);

	count = 0;
	fast = head;
	slow = head;

	while (fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			ptr1 = head;
			ptr2 = slow;

			while (ptr1 != ptr2)
			{
				ptr1 = ptr1->next;
				ptr2 = ptr2->next;
			}
			while (head != ptr1)
			{
				printf("[%p] %d\n", (void *)head, head->n);
				head = head->next;
				count++;
			}
			do
			{
				printf("[%p] %d\n", (void *)head, head->n);
				ptr1 = ptr1->next;
				count++;
			}while (ptr1 != slow);
			printf("-> [%p] %d\n", (void *)ptr1, ptr1->n);
			return count;
		}
	}
	while (head)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		count++;
	}
	return (count);
}
