#include "hash_tables.h"

/**
 * hash_table_delete- a function to delete the hash tables
 * @ht: hash table
 *
 * Return: Nothing
 **/

void hash_table_delete(hash_table_t *ht)
{
	unsigned int i;
	hash_node_t *node, *temp;
	hash_table_t *table = ht;

	for (i = 0; i < table->size; i++)
	{
		node = table->array[i];
		while (node)
		{
			temp = node->next;
			free(node->key);
			free(node->value);
			free(node);
			node = temp;
		}
	}
	free(table->array);
	free(table);
}
