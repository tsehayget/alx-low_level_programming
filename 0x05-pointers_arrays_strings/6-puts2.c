#include "main.h"
/**
 * puts2 - Prints one char out of two of a string.
 * @str: pointer. *str points to the actual value
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}
