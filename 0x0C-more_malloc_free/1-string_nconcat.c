#include "main.h"

/**
 * string_nconcat -  a function that concatenates two strings
 * @s1 : parameter 1: pointer to character
 * @s2 : parmeter 2: pointer to character
 * @n : unsigned integers
 *
 * Return: malloc pointer
 **/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, j, len1, len2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = findlength(s1);
	len2 = findlength(s2);

	if (n >= len2)
		n = len2;

	ptr = malloc(len1 + n + 1);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		ptr[i] = s1[i];

	for (j = 0; j < n; j++)
		ptr[len1 + j] = s2[j];

	ptr[len1 + n] = '\0';

	return (ptr);
}


/**
 * findlength - to find the length of string
 * @str: parameter1: The string
 *
 * Return: number of charters in str
 **/

int findlength(char *str)
{
	unsigned int n = 0;

	while (*str)
	{
		n++;
		str++;
	}
	return (n);
}
