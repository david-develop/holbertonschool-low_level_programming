#include "dog.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * print_dog - prints a struct.
 * @d: pointer to struct dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *nd;
	int i, j;

	for(i = 0; name[i] != '\0'; i++)
		;
	for(j = 0; owner[j] != '\0'; j++)
		;

	nd = malloc(sizeof(dog_t));
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
