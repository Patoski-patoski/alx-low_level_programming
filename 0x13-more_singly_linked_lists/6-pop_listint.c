#include "lists.h"

/**
 * pop_listint - a function that deletes the head node of a linked list
 * @head: a pointer to apoiner to head
 *
 * Return: the head node’s data
 **/

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int store;

	if (head == NULL)
		return (0);

	temp = *head;
	store = (temp)->n;
	
	if (!store)
		return (0);

	*head = (*head)->next;
	free(temp);
	temp = NULL;

	return (store);
}


