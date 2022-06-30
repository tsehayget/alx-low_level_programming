#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc.
 * @b: unsigned int memory location
 * Return: void pointer
 */
void *malloc_checked(unsigned int b)
{
	void *a = malloc(b);
	if (a == NULL)
	{
		exit(98);
	}
	return (a);
}
