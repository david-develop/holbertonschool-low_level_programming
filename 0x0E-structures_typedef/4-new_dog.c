#include "dog.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * print_dog - prints a struct.
 * @d: pointer to struct dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *nd;

	nd = malloc(sizeof(dog_t));
	if (nd == NULL)
		return (NULL);
	nd->name = malloc(sizeof(char) * (strlen(name) + 1));
	if (nd->name == NULL)
	{
		free(nd);
		return (NULL);
	}
	nd->owner = malloc(sizeof(char) * (strlen(owner) + 1));
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
