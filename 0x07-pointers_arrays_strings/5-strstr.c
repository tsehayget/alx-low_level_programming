#include "main.h"
/**
 * _strstr - function that locates a substring.
 * @haystack: contains string
 * @needle: word to be search
 * Return: needle
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	for (i = 0; *haystack; haystack++)
	{
		for (i = 0; haystack[i] == needle[i]; i++)
			;
		if (needle[i] == '\0')
			return (haystack);
	}
	return (0);
}
