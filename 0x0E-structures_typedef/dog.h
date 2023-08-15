#ifndef _Dog
#define _Dog

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
dog_t *new_dog(char *name, float age, char *owner);
char *my_strdup(char *str);
void free_dog(dog_t *d);

#endif
