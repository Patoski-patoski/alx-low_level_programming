#include "lists.h"

/**
 * print_list - a function that prints all the elements of a list_t list
 * @ h: a pointer to struct list_t
 *
 * Return: the number of nodes
 **/

size_t print_list(const list_t *h)
{
	int node;

	node = 0;
	if (h == NULL)
		return (1);

	while (h != NULL)
	{
		node++;
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
	}
	return (node);
}
