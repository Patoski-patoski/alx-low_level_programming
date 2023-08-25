#include "lists.h"

/**
 * free_list - a function that frees list_t
 * @head: a pointer to list_t
 *
 * Return: Nothing
 **/

void free_list(list_t *head)
{
	list_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current->str);
		free(current);
	}
}
