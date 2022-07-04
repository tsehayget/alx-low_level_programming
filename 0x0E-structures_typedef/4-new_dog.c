#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - creates a new dog
 * @name: string
 * @age: float number
 * @owner: string
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *newDog;
	int i, j, k;
	char *a, *b;


	newDog = malloc(sizeof(struct dog));
	if (newDog == NULL)
		return (NULL);
	for (i = 0; name[i] != '\0'; i++)
		;
	for (j = 0; owner[j] != '\0'; j++)
		;

	a = malloc(sizeof(char) * i + 1);
	if (a == NULL)
	{
		free(newDog);
		return (NULL);
	}
	b = malloc(sizeof(char) * j + 1);
	if (b == NULL)
	{
		free(a);
		free(newDog);
		return (NULL);
	}
	for (k = 0; k <= i; k++)
		a[k] = name[k];
	for (k = 0; k <= j; k++)
		b[k] = owner[k];

	newDog->name = a;
	newDog->age = age;
	newDog->owner = b;
	return (newDog);
}
