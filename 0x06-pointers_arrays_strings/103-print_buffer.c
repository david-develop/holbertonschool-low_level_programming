#include "holberton.h"
#include <stdio.h>
/**
 * print_buffer - function that print the content of the buffer.
 * @b: pointer to string
 * @size: size of buffer.
 */
void print_buffer(char *b, int size)
{
	int leng_1;

	for (leng_1 = 0; b[leng_1] < size; leng_1++)
		;
	printf("Leng of string: %d, size of the buffer: %d\n", leng_1, size);
}
