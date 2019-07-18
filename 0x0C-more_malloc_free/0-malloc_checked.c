#include "holberton.h"
#include <stdlib.h>
/**
 * malloc_checked - function that allocates memory using malloc.
 * @b: space requested.
 * Return: Pointer to allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	void *mem_ad = NULL;

	mem_ad = malloc(b);
	if (mem_ad == NULL)
		exit(98);
	else
		return (mem_ad);
}
