#include "lists.h"

/**
 * list_len - a function that returns the number of elements in a linked list
 * @h: a pointer to typdef struct list_t
 *
 * Return: number of elements
 **/

size_t list_len(const list_t *h)
{
	size_t elements;

	for (elements = 0; h != NULL; h = h->next, elements++)
		;
	return (elements);
}
