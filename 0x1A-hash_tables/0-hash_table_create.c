#include "hash_tables.h"

/**
 * hash_table_create- a function that creates a hash table
 * @size: size of the array
 *
 * Return: On success, a pointer to the newly created hash table, else NULL
 *
 **/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned int i;

	if (size <= 0)
		return (NULL);

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);

	table->array = calloc(size, sizeof(hash_node_t *));
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}

		for (i = 0; i < size; i++)
		table->array[i] = NULL;

	table->size = size;
	return (table);
}



