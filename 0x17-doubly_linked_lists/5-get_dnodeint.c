#include "lists.h"

/**
 * get_dnodeint_at_index-  a function that returns the nth node of a
 * dlistint_t linked list.
 *
 * @head: the entry point of the list
 * @index: the index node of the list
 *
 * Return: nth node
 **/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int node = 0;
	dlistint_t *current = NULL;

	while (head != NULL)
	{
		if (node == index)
		{
			current = head;
			break;
		}
		head = head->next;
		node++;
	}
	return (current);
}
