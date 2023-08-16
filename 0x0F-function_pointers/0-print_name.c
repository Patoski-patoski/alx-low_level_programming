#include "function_pointers.h"

/**
 * print_name - a function to print name
 * @name: parameter 1
 * @f: pointer to void function
 *
 * Return: Nothing
 *
 **/

void print_name(char *name, void (*f)(char *))
{
	if (!name)
		return;

	f(name);
}
