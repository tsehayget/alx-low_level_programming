#include "main.h"
/**
 * _islower(int c) - function that checks for lowercase character
 * return: 1 for lowercase, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
