#include "main.h"
/**
 * rot13 - replaces characters
 *
 * @s: pointer string importing
 * Return: Returns final value
 */
char *rot13(char *s)
{
	char l33t[52] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char real[52] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
		for (j = 0; j < 52; j++)
			if (s[i] == real[j])
			{
				s[i] = l33t[j];
				break;
			}
	return (s);
}
