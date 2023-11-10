#include "lists.h"

/**
 * dlistint_len- a function that returns the number of elements
 * in a linked dlistint_t list.
 *
 * @h: the head, entry point of the list
 *
 * Return:  the number of elements
 **/

size_t dlistint_len(const dlistint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		h = (*h).next;
		num++;
	}
	return (num);
}
