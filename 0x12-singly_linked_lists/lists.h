#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>
#include <stddef.h>

typedef struct list_t{
	char *str;
	unsigned int len;
	struct list_t *next;
	}list_t;
int _putchar(char c);
size_t print_list(const list_t *h);
#endif
