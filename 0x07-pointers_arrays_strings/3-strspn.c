#include "main.h"
/**
 * _strspn - gets the length of a prefix substring.
 * @accept: contains characters
 * @s: contains string
 * Return: maximun i
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != s[i]; j++)
		{
			if (accept[j] == '\0')
				return (i);
		}
	}
	return ('\0');
}
