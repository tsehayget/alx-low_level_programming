#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - generates random valid passwords for the program
 *
 * Return: Always 0.
 */

int main(void)
{
	int a = 0;
	int b, sum;
	int p[100];

	sum = 0;

	srand(time(NULL));
	while (a < 100)
	{
		p[a] = (rand() % 78);
		sum += (p[a] + '0');
		putchar(p[a] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			b = 2772 - sum - '0';
			sum += b;
			putchar(b + '0');
			break;
		}
		a++;
	}
	return (0);
}
