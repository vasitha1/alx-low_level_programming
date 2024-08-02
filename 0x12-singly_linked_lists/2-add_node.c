#include "lists.h"
#include <string.h>

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
 * add_node - function that adds a new node at the beginning of a list.
 * @head: The current head of linked list
 * @str: The string to be added at the beginning of the linked list
 *
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	if (str == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = *head;
	*head = new;

	return (*head);
}
