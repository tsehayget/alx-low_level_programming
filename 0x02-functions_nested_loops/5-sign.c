#include "main.h"
/**
 *  print_sign - Prints the sign of a number.
 *
 *  @n: type int integer, can be negative or positive
 *  description: prints the sign of a number
 *  Return: 0 if 0, 1 if above 0, -1 if below 0.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
