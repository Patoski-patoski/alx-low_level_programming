#include "hash_tables.h"

/**
 * hash_table_set- a function that adds an element to the hash table
 *
 * @ht: the hashtable
 * @key: is the key
 * @value: the value of the key
 *
 * Return: On success, 1. Otherwise 0
 **/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned int index;
	hash_node_t *newpair = NULL;

	if (key == NULL)
		return (0);

	index = key_index((const unsigned char *)key, 1024);
	newpair = malloc(sizeof(hash_node_t));

	if (newpair == NULL)
		return (0);

	newpair->key = ((char *) key);
	if (value == NULL)
		newpair->value = " ";
	else
		newpair->value = strdup(value);

	newpair->next = NULL;

	if (ht->array[index] == NULL)
	{
		ht->array[index] =  newpair;
		return (1);
	}
	else
	{
		hash_node_t *current = ht->array[index];

		while (current->next != NULL)
			current = current->next;

		current->next = newpair;
	}
	return (1);
}
