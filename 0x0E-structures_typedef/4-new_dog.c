#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - creates a new struct dog.
 * @name: input name.
 * @age: input age.
 * @owner: input owner name.
 * Return: pointer to struct.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *nd;
	int i, j, len;

	for (i = 0; name[i] != '\0'; i++)
		;
	for (j = 0; owner[j] != '\0'; j++)
		;

	nd = malloc(sizeof(struct dog));
	if (nd == NULL)
		return (NULL);
	nd->name = malloc(sizeof(char) * (i + 1));
	if (nd->name == NULL)
	{
		free(nd);
		return (NULL);
	}
	for (len = 0; len <= i; len++)
		nd->name[len] = name[len];
	nd->age = age;
	nd->owner = malloc(sizeof(char) * (j + 1));
	if (nd->owner == NULL)
	{
		free(nd->name);
		free(nd);
		return (NULL);
	}
	for (len = 0; len <= j; len++)
		nd->owner[len] = owner[len];
	return (nd);
}
