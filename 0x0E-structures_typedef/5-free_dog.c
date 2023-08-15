#include "dog.h"

/**
 * free_dog - a function to free dof (dog_t)
 * @d: struct dog_t
 *
 * Return: Nothing
 **/

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);

	free(d);
}
