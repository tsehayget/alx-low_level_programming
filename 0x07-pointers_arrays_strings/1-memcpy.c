#include "main.h"
/**
 * _memcpy - function that copies memory area.
 * @n: limits the amount of bytes
 * @dest: final output
 * @src: bytes to be copied
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	while (n > 0)
	{
		dest[i] = src[i];
		i++;
		n--;
	}
	return (dest);
}
