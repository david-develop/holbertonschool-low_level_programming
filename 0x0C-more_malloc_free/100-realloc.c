#include "holberton.h"
#include <stdlib.h>
/**
 * _realloc - reallocates a memory block using malloc and free.
 * @ptr: pointer to the memory previously allocated.
 * @old_size: size, in bytes, of the allocated space for ptr.
 * @new_size:  new size, in bytes of the new memory block.
 * Return: Pointer to reallocated memory.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *rea_mem = NULL;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		rea_mem = malloc(new_size);
		if (rea_mem == NULL)
			return (NULL);
		return (rea_mem);
	}

	if (new_size > old_size)
	{
		rea_mem = malloc(old_size + new_size);
		if (rea_mem == NULL)
			return (NULL);
		for (i = 0; i < old_size; i++)
		{
			rea_mem[i] = *((char *)ptr + i);
		}
		free(ptr);
	}

	if (new_size < old_size)
	{
		rea_mem = malloc(new_size);
		if (rea_mem == NULL)
			return (NULL);
		for (i = 0; i < new_size; i++)
		{
			rea_mem[i] = *((char *)ptr + i);
		}
		free(ptr);
	}
	return (rea_mem);
}
