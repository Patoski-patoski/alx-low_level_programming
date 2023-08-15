#include "dog.h"

/**
 * print_dog -  a function that prints a struct dog
 * @d: struct dog
 *
 * Return: Nothing
 **/

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	
	printf("Name: %s\n", d->name != NULL ? d->name : "(nil)");
	printf("Age: %f\n", d->age >= 0 ? d->age : (double)0);
	printf("Owner: %s\n", d->owner != NULL ? d->owner : "(nil)");
}
