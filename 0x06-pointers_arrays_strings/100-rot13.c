#include "main.h"
/**
 * rot13 - replaces characters
 * @s: pointer string importing
 * Return: Returns final value in to pointer
 */
char *rot13(char *s)
{
	char c1[] = "NOPQRSTUVWXYZABCDEFGHIJKLM";
	char c2[] = "nopqrstuvwxyzabcdefghijklm";
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if ((s[i] > 64 && s[i] < 91) || (s[i] > 96 && s[i] < 123))
		{
			s[i] = (s[i] - 65 > 25) ?
				c2[s[i] - 97] : c1[s[i] - 65];
		}
	}
	return (s);
}
