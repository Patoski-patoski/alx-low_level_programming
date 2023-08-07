#include "main.h"

/**
 * str_concat - a function that concatenates two strings.
 * @s1: the destination of final concatenation
 * @s2: the source of concatenation
 *
 * Return:  pointer to allocated space
 **/

char *str_concat(char *s1, char *s2)
{
	char *ptr, *ptr2;
	unsigned int i, j;
	unsigned int len, len2;

	ptr = ptr2 = NULL;
	len = len2 = 0;

	if (s1 == NULL || s2 == NULL)
		return ("");

	len = mylength(s1);
	len2 = mylength(s2);

	ptr = malloc(len + len2 + 1);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		ptr[i] = s1[i];

	ptr2 = ptr + len;

	if (ptr2 == NULL)
		return (NULL);

	for (j = 0; s2[j] != '\0'; j++)
		ptr2[j] = s2[j];

	ptr[len + len2] = '\0';

	return (ptr);
}

/**
 * mylength - to find the length of string
 * @str: parameter1: The string
 *
 * Return: number of charters in str
 **/

int mylength(char *str)
{
	int n;

	n = 0;

	while (*str)
	{
		n++;
		str++;
	}
	return (n);
}
