#include "main.h"
/**
 * print_most_numbers - prints 0-9 once
 * but excludes 2 and 4
 * rerurn: 0
 */
void print_most_numbers(void)
{
	int a = 0;

	for (a = '0'; a <= '9'; a++)
		if (a != '2' && a != '4')
			_putchar(a);
	_putchar('\n');
}
