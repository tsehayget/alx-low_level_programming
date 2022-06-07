#include<stdio.h>
#include "main.h"
/**
 * main - program prints _putchar followed by a new line
 * Return: 0
 */
int main(void)
{
	char c[] = "_putchar/n";
	int a;

	for (a = 0; a < 9; a++)
	{
		_putchar(c[a]);
	}

	return (0);
}
