#include "main.h"
/**
 * _isupper - checks if letter is capital
 * @c: variable imported from main.c
 * Return: 1 if capital letter, else, 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
