#include "function_pointers.h"
/**
 * print_name - function that prints a name.
 * @name: string of input name.
 * @f: pointer to function.
 *
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
