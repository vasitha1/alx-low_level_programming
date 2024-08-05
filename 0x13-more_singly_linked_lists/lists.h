#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>
#include <stdio.h>

/**
 * listint_s - structure to define linked list
 * @n: Data part
 * @next: Pointer to next node
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
}
listint_t;

size_t print_listint(const listint_t *h);
#endif
