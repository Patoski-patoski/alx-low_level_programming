#include "dog.h"

/**
 * new_dog - a function that creates a new dog.
 * @name: first parameter
 * @age: second parameter
 * @owner: third parameter
 *
 * Return: pointer to struct(dog_t)
 **/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *main_dog;

	main_dog = malloc(sizeof(dog_t));

	if (main_dog == NULL)
		return (NULL);

	main_dog->name = strdup(name);
	main_dog->age = age;
	main_dog->owner = strdup(owner);

	return (main_dog);
}
