#include <stdio.h>

/**
* main - to prints natural numbers below 1024 that are
* multiplies of 5 or 3
*
* Return: Always 0.
*/
int main(void)
{
	int a, b;

	for (a = 1; a < 1024; a++)
		{
		if ((a % 3) == 0 || (a % 5) == 0)
		b += a;
		}
	printf("%d\n", b);
	return (0);
}
