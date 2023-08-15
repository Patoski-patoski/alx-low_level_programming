#ifndef _Dog
#define _Dog

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - Short description
 * @name: first member; name of dog
 * @age: second member; age of dog
 * @owner: third member; owner of dog
 *
 **/

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);


#endif
