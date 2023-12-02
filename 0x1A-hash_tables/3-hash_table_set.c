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
	unsigned long int index;
	hash_node_t *newpair, *current;

	if (ht == NULL || key == NULL || strlen(key) == 0)
		return (0);

	index = key_index((unsigned char *)key, ht->size);

	current = ht->array[index];
	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = strdup(value);
			return (1);
		}
		current = current->next;
	}

	newpair = malloc(sizeof(hash_node_t));
	if (newpair == NULL)
		return (0);

	newpair->key = strdup(key);
	newpair->value = (value != NULL) ? strdup(value) : NULL;
	newpair->next = ht->array[index];
	ht->array[index] = newpair;

	return (1);
}
