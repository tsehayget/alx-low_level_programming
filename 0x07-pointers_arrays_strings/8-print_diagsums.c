#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers.
 * @a: array imported
 * @size: size of integers
 */
void print_diagsums(int *a, int size)
{
	int i, j, k;

	i = 0;
	j = 0;
	k = size * size;
	while (i < k)
	{
		if (i % (size + 1) == 0)
			j += a[i];
		i++;
	}
	printf("%d, ", j);

	i = 0;
	j = 0;
	while (i < k)
	{
		if (i % (size - 1) == 0 && i != (k - 1) && i != 0)
			j += a[i];
		i++;
	}
	printf("%d\n", j);
}
