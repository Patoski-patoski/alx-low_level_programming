#include "hash_tables.h"

/**
 * hash_djb2- a function that generates a hash value from a string
 * @str: strings containing unsigned characters
 *
 * Return: a new hash value
 **/

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
