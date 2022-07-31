#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: header address
 * @str: string
 * Return: new string
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n = malloc(sizeof(list_t));
	list_t *last;
	char *string = strdup(str);

	if (n == NULL)
	{
		free(string);
		return (NULL);
	}

	n->str = string;
	n->len = _strlen(str);
	n->next = NULL;

	if (*head == NULL)
	{
		*head = n;
		return (n);
	}
	last = *head;
	while (last->next != NULL)
	{
		last = last->next;
	}

	last->next = n;

	return (n);
}

/**
 * _strlen - prints length
 * @s: pointer
 * Return: 0
 */
int _strlen(const char *s)
{
	int l;

	for (l = 0; s[l] != '\0'; l++)
		continue;

	return (l);
}
