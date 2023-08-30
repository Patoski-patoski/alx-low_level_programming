#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns the nth node of a listint_t linked list.
 * @head: a head pointer
 * @index: the index of the node, starting at 0
 *
 * Return the nth node
 **/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n;
	listint_t *node;

	n = 0;

	if (head == NULL)
		return (NULL);

	while (head != NULL)
	{
		n++;
		head = head->next;
		if (n == index)
			node = head;
	}
	return (node);
}
