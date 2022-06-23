#include "main.h"
/**
 * is_div - checks divisibility
 * @i: number to be checked
 * @div: divisor
 * Return: 0 or 1
 */
int is_div(int i, int div)
{
	if (i % div == 0)
		return (0);
	if (div == i / 2)
		return (1);
	return (is_div(i, div + 1));
}

/**
 * is_prime_number - checks a number if
 * it is priw
 * @n: number to be checked
 * Return: 1 if the number is prime
 *         0 if the number is not.
 */
int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
		return (0);
	else if (n >= 2 && n <= 3)
		return (1);
	return (is_div(n, div));
}
