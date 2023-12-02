#include "hash_tables.h"

/**
 * hash_table_print- a table to print hash table
 * @ht: the hash table
 *
 * Return: nothing
 *
 **/

void hash_table_print(const hash_table_t *ht)
{
	unsigned int index;
	hash_node_t *node;
	int comma_flag = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		node = ht->array[index];
		while (node != NULL)
		{
			if (comma_flag == 1)
				printf(",");
			printf("'%s': '%s' ", node->key, node->value);
			comma_flag = 1;
			node = node->next;
		}
	}
	printf("}\n");
}
