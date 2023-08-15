#include "dog.h"

/**
 * print_dog -  a function that prints a struct dog
 * @d: struct dog
 *
 * Return: Nothing
 **/

void print_dog(struct dog *d)
{
	struct dog *my_dog;

	if (d == NULL)
		return;

	my_dog = d;

	if (my_dog->name == NULL)
		puts("Name: (nil)");
	else
		printf("Name: %s\n", my_dog->name);

	if (my_dog->age < 0)
		puts("Name: (nil)");
	else
		printf("Age: %f\n", my_dog->age);

	if (my_dog->owner == NULL)
		puts("Name: (nil)");
	else
		printf("Owner: %s\n", my_dog->owner);
}

