#include "main.h"
/**
 * _atoi - function that convert a string to an integer.
 * @s: string to be converted
 * Return: value of integer
 */
int _atoi(char *s)
{
	int i, j, n, m;

	i = 0;
	n = 0;
	m = 1;
	while ((*(s + i) < '0' || *(s + i) > '9') && (*(s + i) != '\0'))
	{
		if (*(s + i) == '-')
			m *= -1;
		i++;
	}
	j = i;
	while ((*(s + j) >= '0') && (*(s + j) <= '9'))
	{
		n = n * 10 + m * (*(s + j) - '0');
		j++;
	}
	return (n);
}
