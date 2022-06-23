#include "main.h"

int str_len_rec(char *s);
int is_palindrome(char *s);
/**
 * is_palindrome - checks  if a string is a palindrome
 *                 or not
 * @s: string
 * Return: 0 or 1
 */
int is_palindrome(char *s)
{
	int i = str_len_rec(s);

	if (*s != s[i - 1])
	{
		return (0);
	}
	else if (*s == s[i - 1])
	{
		is_palindrome(s + 1);
	}
return (1);
}
/**
 * str_len_rec - counts all indexes
 * @s: string
 * Return: value
 */
int str_len_rec(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + str_len_rec(s + 1));
}
