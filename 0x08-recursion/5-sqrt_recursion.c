#include "main.h"
/**
 * sq_root - calculates the square root
 * @x: base
 * @y: integer
 * Return: x
 */
int sq_root(int x, int y)
{
	if ((x * x) < y)
	{
		return (sq_root((x + 1), y));
	}
	else if ((x * x) == y)
	{
		return (x);
	}
	else if ((x * x) > y)
	{
		return (-1);
	}
	return (x);
}

/**
 * _sqrt_recursion -  returns the natural square root of a number.
 * @n: integer
 * Return: fimal output
 */
int _sqrt_recursion(int n)
{
	int sq;

	sq = sq_root(1, n);
	return (sq);
}
