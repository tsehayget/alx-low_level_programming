#include<stdio.h>
/**
 * main - main block
 * prints all possible different combinations of three digits
 * Return: 0
 */
int main(void)
{
	int a, b, c;

	for (a = 0; a <= 7; a++)
	{
		for (b = 0; b <= 8; b++)
		{
			for (c = 0; c <= 9; c++)
			{
				putchar((a % 10) + '0');
				putchar((b % 10) + '0');
				putchar((c % 10) + '0');

				if (a == 1 && b == 2 && c == 3)
					continue;

				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
