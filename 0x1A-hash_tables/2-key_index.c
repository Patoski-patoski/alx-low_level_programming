#include "hash_tables.h"

/**
 * hash_table_set-  a function that adds an element to the hash table.
 *
 * @ht: the hash table you want to add or update the key/value to
 * @key: the key
 * @value: the size of the array of the hash table 
 *
 *
 *
 **/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned int index;

	if (key == NULL)
		return (-1);

	index = hash_djb2(key) % size;
	return (index);
}

