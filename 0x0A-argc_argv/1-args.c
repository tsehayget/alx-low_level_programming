#include <stdio.h>
/**
 * main - prints the number of arguments passed into it.
 * @argv: An array of pointers to the arguments.
 * @argc: The number of arguments supplied to the program
 * Return: 0
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
