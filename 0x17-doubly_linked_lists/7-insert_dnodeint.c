#include "lists.h"

/**
 * insert_dnodeint_at_index-  inserts a new node at a given position
 *
 * @h: the entry point into the list
 * @idx: is the index where the new node is to be added
 * @n: the integer data of the new node
 *
 * Return:  the address of the new node, or NULL if it failed
 **/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode = NULL;
	dlistint_t *temp = *h;
	unsigned int pos = 0;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->prev = NULL;
	newNode->next = NULL;

	if (idx == 0)
	{
		newNode->next = *h;
		if (*h != NULL)
			(*h)->prev = newNode;
		*h = newNode;

		return (newNode);
	}

	while (temp != NULL)
	{
		if (idx == pos)
		{
			newNode->prev = temp->prev;
			newNode->next = temp;
			if (temp->prev != NULL)
				temp->prev->next = newNode;

			return (newNode);
		}
		temp = temp->next;
		pos++;
	}

	free(newNode);
	return (NULL);
}
