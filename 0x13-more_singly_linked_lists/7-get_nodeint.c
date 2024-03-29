#include "lists.h"

/**
 * get_nodeint_at_index- returns the nth node of a listint_t linked list.
 * @head: a head pointer
 * @index: the index of the node, starting at 0
 *
 * Return: the nth node
 **/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n;
	listint_t *node;

	n = 0;

	if (head == NULL)
		return (NULL);

	node = head;

	for (n = 0; n < index && node != NULL; n++)
		node = node->next;

	return (node);
}
