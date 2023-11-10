#include "lists.h"

/**
 *  sum_dlistint-  a function that returns the sum of all the data (n)
 *  of a dlistint_t linked list.
 *
 * @head: the entry point of the list
 *
 * Return: the sum of list of 0 if list is empty
 *
 **/

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
