#include "dog.h"
#include <stddef.h>
#include <stdio.h>
/**
 * print_dog - prints a struct.
 * @d: pointer to struct dog.
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
