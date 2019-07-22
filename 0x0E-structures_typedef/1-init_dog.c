#include "dog.h"
/**
 * init_dog - nitialize a variable of type struct dog.
 * @d: pointer to struct dog.
 * @name: input name.
 * @age: input age of the dog.
 * @owner: input the name of the owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
