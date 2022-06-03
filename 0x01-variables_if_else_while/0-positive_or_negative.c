#include<stdio.h>
#include<time.h>
#include<stdlib.h>
/**
 * main - Generates a random number and prints the number
 * and if its negative, positive or zero
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)

		printf("%i is positive\n", n);

	else if (n < 0)
		printf("%i is negative\n", n);
	else if (n == 0)
		printf("%i is zero\n", n);

	return (0);
}
