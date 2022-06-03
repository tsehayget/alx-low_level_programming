#include<stdio.h>
/**
 * main - main block
 * Description -  prints the lowercase alphabet in reverse
 * Return: Always 0 (success)
 */
int main(void)
{
	int c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
