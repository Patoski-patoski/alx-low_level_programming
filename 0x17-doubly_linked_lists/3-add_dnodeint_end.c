#include "lists.h"

/**
 * add_dnodeint_end-  a function that adds a new node at the end 
 * of a dlistint_t list.
 *
 * @head: a pointer t the head pointer
 * @n: an integer number to be added
 *
 * Return: address of the new element, or NULL if it failed
 **/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *lastNode = malloc(sizeof(dlistint_t));
	dlistint_t *temp = *head;

	if (lastNode == NULL)
		return (NULL);

	lastNode->n = n;
	lastNode->next = NULL;

	if (*head == NULL)
	{
		lastNode->prev = NULL;
		*head = lastNode;

		return (lastNode);
	}

	while (temp->next != NULL)
		temp = temp->next;

	temp->next = lastNode;
	lastNode->prev = temp;

	return (lastNode);
}
