#include<stdio.h>
/**
 * main - prints all alphabets
 * uppercase and lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	int l, u;

	for (l = 'a'; l <= 'z'; l++)
		putchar(l);
	for (u = 'A'; u <= 'Z'; u++)
		putchar(u);
	putchar('\n');
	return (0);
}
