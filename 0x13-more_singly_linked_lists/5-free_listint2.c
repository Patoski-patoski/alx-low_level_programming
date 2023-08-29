#include "lists.h"

/**
 * free_listint2 - a function that frees a listint_t list.
 * @head: a pointer to a head pointer
 *
 *Return: Nothing
 **/

void free_listint2(listint_t **head)
{
	listint_t *current;

	if (*head == NULL)
		return;

	while (*head != NULL)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
	}
	*head = NULL;
}
