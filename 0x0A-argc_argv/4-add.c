#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds positive numbers.
 * @argc: The number of arguments supplied to the program
 * @argv: An array of pointers to the arguments.
 * Return: 1 for error 0 therwise
 */
int main(int argc, char *argv[])
{
	int i, t;
	char *p;
	int n;

	t = 0;
	if (argc > 1)
	{
		for (i = 1; argv[i]; i++)
		{
			n = strtol(argv[i], &p, 10);
			if (!*p)
				t += n;
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	printf("%d\n", t);
	return (0);
}

