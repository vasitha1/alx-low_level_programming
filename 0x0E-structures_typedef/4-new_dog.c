#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - function that creates a new dog.
 * @name: Dog name
 * @age: Dog age
 * @owner: Dog owner
 *
 * Return: new dog struct created
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, j, k;
	dog_t *newdog;

	if (name == NULL || owner == NULL)
		return (NULL);

	newdog = malloc(sizeof(dog_t));

	if (newdog == NULL)
		return (NULL);

	for (i = 0; name[i] != '\0'; i++)
		;
	i++;/*counting space for memory allocation including terminating '\0'*/
	newdog->name = malloc(i * sizeof(char));

	if (newdog->name == NULL)
	{
		free(newdog);
		return (NULL);
	}

	for (j = 0; j < i; j++)
		newdog->name[j] = name[j];

	newdog->age = age;

	for (k = 0; owner[k] != '\0'; k++)
		;
	k++;
	newdog->owner = malloc(k * sizeof(char));
	if (newdog->owner == NULL)
	{
		free(newdog->name);
		free(newdog);
		return (NULL);
	}
	for (j = 0; j < k; j++)
		newdog->owner[j] = owner[j];
	return (newdog);
}
