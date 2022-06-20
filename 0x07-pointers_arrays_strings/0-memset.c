#include "main.h"
/**
 * _memset - function that fills memory with a constant byte
 * @b: character to be replaced
 * @s: pointer stored in s
 * @n: no of bytes
 * Return: value to pointer s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *a = s;

	while (n > 0)
	{
		*s = b;
		s++;
		n--;
	}
	return (a);
}
