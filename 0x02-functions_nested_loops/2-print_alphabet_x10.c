#include "main.h"
/**
 * print_alphabet_x10 -  prints 10 times the alphabet, in lowercase
 * return
 */
void print_alphabet_x10(void)
{
	int c = 1;
	int alp;

	while (c++ <= 10)
	{
		for (alp = 'a'; alp <= 'z'; alp++)
			_putchar(alp);
		_putchar('\n');
	}
}
