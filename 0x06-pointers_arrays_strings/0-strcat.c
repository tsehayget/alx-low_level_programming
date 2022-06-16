#include "main.h"
/**
 * _strcat - function that concatenates two strings.
 * @dest: contains "Hello"
 * @src: contains "World!"
 * Return: @dest
 */
char *_strcat(char *dest, char *src)
{
	int i, d;

	for (i = 0; dest[i] != '\0'; i++)
	{
		;
	}
	for (d = 0; src[d] != '\0'; d++)
	{
		dest[i] = src[d];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
