#include "hash_tables.h"

/**
 * hash_table_get- a function that retrieves a value associated with a key
 *
 * @ht: the hashtable
 * @key: the key
 *
 * Return: the value of the key
 *
 **/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *current;
	unsigned int index;

	if (ht == NULL || strlen(key) == 0)
		return NULL;

	index = key_index((const unsigned char *)key, ht->size);

	current = ht->array[index];

	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
			return current->value;

		current = current->next;
	}
	return NULL;
}
