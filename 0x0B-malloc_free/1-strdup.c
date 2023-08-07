#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space which
 * contains a copy "str"
 *
 * @str: parameter 1: string
 * Return: pointer to memory
 **/

char *_strdup(char *str)
{
	char *ptr = NULL;
	unsigned int i, len;

	len = 0;

	if (str == NULL)
		return (NULL);

	len = findlength(str);

	ptr = malloc((len) + 1);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		ptr[i] = str[i];

	ptr[i] = '\0';

	return (ptr);
}

/**
 * findlength - to find the length of string
 * @str: parameter1: The string
 *
 * Return: number of charters in str
 *
 **/

int findlength(char *str)
{
	int len;

	len = 0;
	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}

