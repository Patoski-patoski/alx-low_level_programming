#include "lists.h"

/**
 * free_dlistint-  a function that frees a dlistint_t list
 * @head: the entry point of the lists
 *
 * Return: Nothing
 **/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
