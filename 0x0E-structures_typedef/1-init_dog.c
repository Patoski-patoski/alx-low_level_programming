#include "dog.h"

/**
 * init_dog - a function tht initialize a variable of type struct dog
 * @d: a struct named d
 * @name: first member
 * @age: second member
 * @owner: third member
 *
 * Return: pointer to struct
 **/


void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog *my_dog;

	my_dog = d;

	my_dog->name = name;
	my_dog->age = age;
	my_dog->owner = owner;
}
