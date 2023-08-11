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
	char *ptr, *ptr2;
	unsigned int i, j, len1, len2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = findlength(s1);
	len2 = findlength(s2);

	ptr = malloc(sizeof(char *) * len1);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		ptr[i] = s1[i];
	ptr[i] = '\0';

	if (n < len2)
	{
		ptr2 = ptr + len1;
		if (ptr2 == NULL)
			return (NULL);

		for (j = 0; s2[j] != '\0'; j++)
			ptr2[j] = s2[j];
		ptr[len1 + n] = '\0';
	}
	if (n >= len2)
	{
		ptr2 = ptr + len2;
		if (ptr2 == NULL)
			return (NULL);

		for (j = 0; s2[j] != '\0'; j++)
			ptr2[j] = s2[j];
		ptr[len1 + len2] = '\0';
	}
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
	int n;

	n = 0;

	while (*str)
	{
		n++;
		str++;
	}
	return (n);
}
