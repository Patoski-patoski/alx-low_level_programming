#include "lists.h"

/**
 * delete_nodeint_at_index - a function that deletes the node at index index
 * of a listint_t linked list.
 *
 * @head: a pointer to the head pointer
 * @index: index of the node that should be deleted. Index starts at 0
 *
 * Return:  1 if it succeeded, -1 if it failed
 **/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;

	listint_t *temp, *temp2;

	if (head == NULL || (*head) == NULL)
		return (-1);

	temp = (*head);

	if (index == 0)
	{
		(*head) = (*head)->next;
		free(temp);
		return (1);
	}

	for (i = 0; temp != NULL && i < (index - 1); i++)
		temp = temp->next;

	if (temp == NULL || temp->next == NULL)
		return (-1);

	temp2 = temp->next;
	temp->next = temp2->next;
	free(temp2);

	return (1);
}
