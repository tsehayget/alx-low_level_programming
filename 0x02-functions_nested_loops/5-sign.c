#include "main.h"
/**
 *  print_sign - Print the sign of a number
 *  @n - type int integer, can be negative or positive
 *  description: prints the sign of a number
 *  return 1 for positive, 0 for 0
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
