#include "hash_tables.h"

/**
 * hash_table_delete- a function that deletes a hash table
 * @ht: The hashtable
 *
 * Return: Nothing
 **/

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temp, *node;
	unsigned int index;

	if (ht == NULL)
		return;

	for (index = 0; index < ht->size; index++)
	{
		node = ht->array[index];
		while (node != NULL)
		{
			temp = node->next;
			free(node->key);
			free(node->value
			free(node);
			node = temp;;
		}
	}
	free(ht-> array);
	free(ht);
}
