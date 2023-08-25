#include "lists.h"

/**
 * add_node_end - a  function that adds a new node at the end of a list_t list.
 * @head:  a pointer to a pointer to list_t
 * @str: string element of list_t
 *
 * Return: a list_t
 **/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr_head, *new_node;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		ptr_head = *head;

		while (ptr_head->next != NULL)
			ptr_head = ptr_head->next;

		ptr_head->next = new_node;
	}

	return (new_node);
}


