#include "lists.h"

/**
 * free_listint - a function that frees a listint_t list.
 * @head: a pointer to struct listint_t
 *
 *Return: Nothing
 **/

void free_listint(listint_t *head)
{
	listint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
