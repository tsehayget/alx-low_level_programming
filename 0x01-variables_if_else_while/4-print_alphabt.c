#include<stdio.h>
/**
 * main - Prints all the letters in
 * alphabets
 * Return: Always 0 (Success)
 */
int main(void)
{
	int l;

	for (l = 'a'; l <= 'z'; l++)
		if (l != 'e' && l != 'q')
			continue;
	putchar(l);

	putchar('\n');
	return (0);
}
