#include "holberton.h"

/**
 * swap_int - update the value of two integrers.
 * @a: variable input value 1.
 * @b: variable input value 2.
 */
void swap_int(int *a, int *b)
{
	int aux = *a;

	*a = *b;
	*b = aux;
}
