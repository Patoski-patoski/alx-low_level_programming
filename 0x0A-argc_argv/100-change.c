/**
 * main - main function
 * @argc: the argument count
 * @argv: the argument vectors
 *
 * Return: name of the argv
 *
 **/

int main(int argc, char *argv[])
{
	int cents;
	int coins;

	argc--;

	if (argc != 1)
		return (1);

	cents = atoi(argv[1]);

	if (cents < 0)
		printf("%d\n", coins);

	else
	{
		while (cents > 0)
		{
			if (cents >= 25)
				cents -= 25;

			else if (cents >= 10)
				cents -= 10;

			else if (cents >= 5)
				cents -= 5;

			else if (cents >= 2)
				cents -= 2;

			else
			      cents -= 1;

			coins++;
		}

		printf("%d", coins);
	}

	return (0);
}


