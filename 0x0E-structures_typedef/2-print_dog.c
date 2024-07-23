#include "dog.h"
#include <stdio.h>

/**
 * print_dog -  function that prints a struct dog
 * @d: Pointer to structure dog
 *
 * Return: void
*/
void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", d->name ? d->name : "nil");
		printf("Age: %.6f\n", d->age);
		printf("Owner: %s\n", d->owner ? d->owner : "nil");
	}
}
