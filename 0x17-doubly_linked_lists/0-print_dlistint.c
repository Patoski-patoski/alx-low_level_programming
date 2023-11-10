#include "lists.h"

/**
 * print_dlistint- a function to print the number of elements
 * in a doubly linked lists
 *
 * @h: the head, entry point of the list
 *
 * Return: The nuber of element(s)
 *
 **/

size_t print_dlistint(const dlistint_t *h)
{
	size_t num_of_elements = 0;

	while (h != NULL)
	{
		printf("%d\n", h->next);
		h = h->next;
		num++;
	}
	return (num);
}
