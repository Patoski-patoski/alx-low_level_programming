#include "lists.h"

/**
 * insert_nodeint_at_index -  inserts a new node at a given position.
 * @head: a pointer to a pointer to head
 * @idx: index of the list where the new node should be added. starts at 0
 * @n: integer data of linkint_t
 *
 * Return: a pointer to linkint_t
 **/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *temp;
	unsigned int i;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (head == NULL)
		return (NULL);

	if (idx == 0)
	{
		new_node->next = (*head);
		(*head) = new_node;
		return (new_node);
	}
	temp = *head;
	for (i = 1; i < idx; i++)
	{
		if (temp == NULL)
			return (NULL);
		temp = temp->next;
	}

	if (temp == NULL)
		return (NULL);
	new_node->next = temp->next;
	temp->next = new_node;

	return (new_node);
}

