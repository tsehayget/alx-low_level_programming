#include "main.h"
/**
 * swap_int - swaps the values of two integers.
 * @a: variable 1
 * @b: variable 2
 *
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
