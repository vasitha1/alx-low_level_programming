#include "lists.h"

/**
 * _strlen - function that counts the length of a string.
 * @str: The string whose caracters are to be counted
 *
 * Return: the length of str
 */

int _strlen(const char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	return (i);
}

/**
 * add_node_end - function that adds a new node at the end of a list.
 * @head: Pointer to begining of linked list
 * @str: String element to be added at the end of the string
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *current;

	new = malloc(sizeof(list_t));
	if (str == NULL || new == NULL)
		return (NULL);

	new->str = strdup(str);

	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = _strlen(new->str);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	current = *head;

	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = new;
	return (new);
}
