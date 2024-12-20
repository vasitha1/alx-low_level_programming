#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>
/**
 * dlistint_s - Structure for doubly linked-list
 * @n: data
 * @prev: Previous node
 * @next: Next node
 */
typedef struct dlistint_s
{
	int n;
	struct dlistint_s *prev;
	struct dlistint_s *next;
}
dlistint_t;

size_t print_dlistint(const dlistint_t *h);

#endif
