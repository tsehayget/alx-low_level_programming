#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space
 * in memory, which contains a copy
 * of the string given as a parameter.
 * @str: string
 * Return: pointer
 */
char *_strdup(char *str)
{
	int l = 0;
	int i = 0;
	char *nStr;
	char *p;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		l++;
		i++;
	}
	nStr = malloc(sizeof(char) * l + 1);
	p = nStr;

	if (nStr == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		p[i] = str[i];
	}

	p[i] = '\0';
	return (nStr);
}
