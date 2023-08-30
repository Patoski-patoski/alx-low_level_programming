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

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	if (head == NULL || (*head) == NULL)
		return (NULL);

	temp = (*head);

	if (!idx)
		return (NULL);

	if (idx == 1)
	{
		(*head) = new_node;
		new_node->n = n;
	}

	while (idx != 1)
	{
		temp = temp->next;
		idx--;
	}

	new_node->next = temp->next;
	temp->next = new_node;
	new_node->n = n;

	return (new_node);
}

