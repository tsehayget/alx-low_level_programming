#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * Return: pointer
 */
char *str_concat(char *s1, char *s2)
{
	char *d;
	int i, j, a, b;

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	d = malloc((i * sizeof(*s1)) + (j * sizeof(*s2)) + 1);
	if (d == NULL)
		return (NULL);
	for (a = b = 0; a < (i + j + 1); a++)
	{
		if (a < i)
			d[a] = s1[a];
		else
			d[a] = s2[b++];
	}
	return (d);
}
