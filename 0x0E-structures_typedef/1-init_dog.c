#include "dog.h"

/**
 * init_dog - Fronction that innitialises the struct dog in dog.h
 * @d: pointer to the stucture
 * @name: Name of dog
 * @age: Age of dog
 * @owner: owner of dog
 *
 * Return: void
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
