#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/**
 * main - main block
 * Description: generate a randome number and prints that number
 * and if it is negatibe, opsitive and zero
 * return :0 (success)
 */
int main(void)/*main function*/
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
