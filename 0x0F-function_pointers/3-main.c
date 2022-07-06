#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - Prints the result
 * @argc: number of argument
 * @argv: array of pointers
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i, j;
	int (*calc)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	i = atoi(argv[1]);
	j = atoi(argv[3]);

	calc = get_op_func(argv[2]);
	if (calc == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((atoi(argv[3]) == 0) && (argv[2][0] == '/' || argv[2][0] == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", calc(i, j));
	return (0);
}
