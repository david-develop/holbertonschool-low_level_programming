#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - free allocated memory.
 * @d: input struct.
 */
void free_dog(dog_t *d)
{
		if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
