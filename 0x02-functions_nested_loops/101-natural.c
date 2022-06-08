#include <stdio.h>
/**
 * main - computes and prints the sum of all the multiples
 * of 3 or 5 below 1024
 * Return: 0
 */
int main(void)
{
	int c;
	int sum = 0;

	for (c = 0; c < 1024; c++)
	{
		if ((c % 3) == 0 || (c % 5) == 0)
			sum += c;
	}
	printf("%d\n", sum);
	return (0);
}
