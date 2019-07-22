#include "dog.h"
#include <stddef.h>
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
	int i, j;

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
	nd->owner = malloc(sizeof(char) * (j + 1));
	if (nd->owner == NULL)
	{
		free(nd->name);
		free(nd);
		return (NULL);
	}
	nd->name = name;
	nd->owner = owner;
	nd->age = age;
	return (nd);
}
