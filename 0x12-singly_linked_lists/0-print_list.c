#include "lists.h"

/**
 * print_list - a function that prints all the elements of a list_t list
 * @h: a pointer to struct list_t
 *
 * Return: the number of nodes
 **/

size_t print_list(const list_t *h)
{
	size_t node;

	node = 0;

	while (h != NULL)
	{
		node++;

		printf("[%d] %s\n", h->str ? h->len : 0, h->str ? h->str : ("nil"));
		h = h->next;
	}
	return (node);
}
