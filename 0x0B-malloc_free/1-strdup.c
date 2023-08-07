#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space which
 * contains a copy "str"
 *
 * @str: parameter 1: string
 * Return: pointer to memory
  */

char *_strdup(char *str)
{
	char *ptr = NULL;
	unsigned int i;

	if (str == NULL)
		return (NULL);

	ptr = malloc(sizeof(str));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		ptr[i] = str[i];

	return (ptr);
}
