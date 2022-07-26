#include <stdio.h>
#include "lists.h"

/**
 * list_len - function that returns the number
 * of elements in a linked list_t list.
 * @h: linked list_t list
 * Return: no of elements
 */
size_t list_len(const list_t *h)
{
	size_t e = 0;

	while (h)
	{
		e++;
		h = h->next;
	}
	return (e);
}
