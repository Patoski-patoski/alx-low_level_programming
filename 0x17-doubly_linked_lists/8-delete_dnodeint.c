#include "lists.h"

/**
 * delete_dnodeint_at_index-  a function that deletes the node at index
 * of a dlistint_t linked list.
 *
 * @head: the pointer to a head pointer
 * @index: index of node to be deleted
 *
 * Return: On success 1, -1 Otherwise
 **/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int pos = 0;

	if (index == 0 && *head != NULL)
	{
		(*head) = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}

	while (temp != NULL)
	{
		if (pos == index)
		{
			if (temp->next != NULL)
				temp->next->prev = temp->prev;
			if (temp->prev != NULL)
				temp->prev->next = temp->next;

			free(temp);
			return (1);
		}
		temp = temp->next;
		pos++;
	}
	return (-1);
}

