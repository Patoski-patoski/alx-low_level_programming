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

	main_dog->name = my_strdup(name);
	main_dog->age = age;
	main_dog->owner = my_strdup(owner);

	return (main_dog);
}

/**
 * my_strdup - a function to duplicate string
 * @str: parameter to be duplicated
 *
 * Return: pointer to duplicated string
 **/

char *my_strdup(char *str)
{
	char *dest;
	unsigned int i, len;

	len = 0;

	while (str[len] != '\0')
		len++;

	dest = malloc(sizeof(char) * (len + 1));

	if (dest == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		dest[i] = str[i];

	return (dest);
}
