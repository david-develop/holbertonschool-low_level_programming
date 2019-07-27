#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - function that prints anything.
 * @format: formats numbers given.
 */

void print_all(const char * const format, ...)
{
	prfor_t form_get[] = {
		{"c", print_char},
		{"i", print_integer},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};
	int i, j, cont;
	va_list argu;
	char *s = "";

	va_start(argu, format);
	i = 0;
	cont = 0;

	while (format[i] && format != NULL)
	{
		j = 0;
		while (j < 4)
		{
			if (form_get[j].form[0] == format[i])
			{
				printf("%s", s);
				(form_get[j].f(argu));
				s = ", ";
				cont++;
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(argu);
}
/**
 * print_char - function that prints characters.
 * @va: arguments.
 */
void print_char(va_list va)
{
	int c;

	c = va_arg(va, int);
	printf("%c", c);
}
/**
 * print_integer - function that prints integers.
 * @va: arguments.
 */
void print_integer(va_list va)
{
	int i;

	i = va_arg(va, int);
	printf("%d", i);
}
/**
 * print_float - function that prints floats.
 * @va: arguments.
 */
void print_float(va_list va)
{
	double f;

	f = va_arg(va, double);
	printf("%f", f);
}
/**
 * print_string - function that prints stings.
 * @va: arguments.
 */
void print_string(va_list va)
{
	char *s;

	s = va_arg(va, char *);
	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}
