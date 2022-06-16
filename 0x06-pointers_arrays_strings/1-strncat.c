#include "main.h"
/**
 * _strncat - function that concatenates two strings.
 * @dest: The string to be appended upon.
 * @src: The string to be appended to dest.
 * @n: number of bytes
 * Return: @dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j, k;
	char a;

	for (i = 0; dest[i] != '\0'; i++)
		;
	a = dest[i];
	for (j = 0; src[j] != '\0'; j++)
		;
	for (k = 0; k < n; k++)
	{
		if (k <= j)
		{
			dest[i] = src[k];
			i++;
		}
		else
		{
			break;
		}
	}
	dest[i] = a;
	return (dest);
}
