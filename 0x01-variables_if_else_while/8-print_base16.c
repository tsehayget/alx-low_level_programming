#include<stdio.h>
/**
 * main - main block
 * Description: prints all the numbers of base 16 in lowercase
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;
	char c;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	for (c = 'a'; c < 'g'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}

