#include "lists.h"

/**
 * print_listint -  a function that prints all the elements of a listint_t list
 * @h: a pointer to first listint_t
 *
 * Return: totl number of element
 **/

size_t print_listint(const listint_t *h)
{
	size_t node;

	node = 0;

	while (h != NULL)
	{
		node++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (node);
}
