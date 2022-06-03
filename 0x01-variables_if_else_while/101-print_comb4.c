#include<stdio.h>
/**
 * main - main block
 * prints all possible different combinations of three digits
 * Return: 0
 */
int main(void)
{
	int a, b, c;

	for (a = 0; a < 8; a++)
	{
		for (b = 0; b < 9; b++)
		{
			for (c = 0; c < 10; c++)
			{
				putchar((a % 10) + '0');
				putchar((b % 10) + '0');
				putchar((c % 10) + '0');

				if (a == 7 && b == 8 && c == 9)
					continue;

				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
