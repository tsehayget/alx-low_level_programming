#include<stdio.h>
/**
 * main - main block
 * prints all possible combinations of single-digit numbers
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
		if (i < 57)
		{
			putchar(' ');
			putchar(',');
		}
	}
	putchar('\n');
	return (0);
}

