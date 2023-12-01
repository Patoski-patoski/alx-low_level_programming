#include "hash_tables.h"

/**
 * key_index- a function that gives you the index of a key.
 *
 * @key: the key
 * @size: the size of the array
 *
 * Return: On success, the key index, otherwise -1
 **/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned int index;

	if (key == NULL)
		return (-1);

	index = hash_djb2(key) % size;
	return (index);
}

