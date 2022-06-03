#include<stdio.h>
/**
 * main - main block
 * prints all possible different combinations of two digits
 * Return: 0
 */
int main(void)
{
	int a, b;

	for (a = '0'; a <= '9'; a++)
		for (b = '0'; b <= '9'; b++)
			if (b < a)
			{
				putchar(a);
				putchar(b);
				if ((a != '8') || (b != '9'))
					putchar(',');
				putchar(' ');
			}
	putchar('\n');
	return (0);
}
