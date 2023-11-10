#include "lists.h"

/**
 * add_dnodeint- a function that adds a new node at the
 * beginning of a dlistint_t list.
 *
 * @head: a pointer to the head pointer
 * @n: the integer to be added
 *
 * Return: the address of the new element, or NULL if it failed
 *
 **/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint *newNode;

	newNode = malloc(sizeof(dlistint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->prev = NULL;
	newNode->next = *head;

	if (*head != NULL)
		*head = newNode;

	*head = newNode;
	return (newNode);
}
