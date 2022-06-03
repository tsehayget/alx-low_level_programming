#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/**
 * main - main block
 * Description: generate a randome number and prints that number
 * and if it is negatibe, opsitive and zero
 * Return :Always 0 (Success)
 */
int main(void) /*Description: generates a random number and prints that number*/
{
	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%i is positive\n", n);
	else if (n < 0)
		printf("%i is negative\n", n);
	else
		printf("%i is zero\n", n);
	return (0);
}
