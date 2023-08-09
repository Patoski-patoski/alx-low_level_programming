#include "main.h"

/**
 * argstostr - a function that concatenates all the arguments of your program
 * @ac: to count the number of argument
 * @av: argument vector
 *
 * Return: a pointer to new ddynamiclly allocated string
 **/

char *argstostr(int ac, char **av)
{
	int i, j;
	int k = 0;
	int total_length = 0;
	char *s = NULL;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		total_length = findlength(av[i] + 1);

	s = malloc(total_length * sizeof(char));

	if (s == NULL)
		return (NULL);

	for (i = 0; i < ac; ++i)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			s[k++] = av[i][j];

		s[k++] = 10;
	}

	s[k - 1] = 10;

	return (s);
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

