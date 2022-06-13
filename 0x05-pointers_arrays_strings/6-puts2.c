#include "main.h"
/**
 * puts2 - prints every other character of a string, starting with
 * the first character
 * @str: string to print
 * return: void
 */
void puts2(char *str)
{
	int i = 0;

	while (*(str + i))
	{
		_putchar(*(str + i));
		i = i + 2;
	}
	_putchar('\n');
}
