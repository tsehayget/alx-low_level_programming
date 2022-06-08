#include<stdio.h>
/**
 * main - main program
 *
 * Return: 0
 */
int main(void)
{
	int a = 1;
	int b = 2;
	int t = 0;
	int c;

	while (b < 4000000)
	{
		if (b % 2 == 0)
			t += b;
		c = b;
		b += a;
		a = c;
	}
	printf("%d\n", t);
	return (0);
}
