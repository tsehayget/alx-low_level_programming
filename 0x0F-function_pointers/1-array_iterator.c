#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - function given as a parameter
 * on each element of an array.
 * @array: array
 * @action: pointer to the function
 * @size: size of the array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if ((array != NULL) && (action != NULL))
	{
		for (i = 0; i < size; i++)
		{
			(*action)(array[i]);
		}
	}
}
