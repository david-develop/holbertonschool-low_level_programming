#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>

/**
 * struct prfor - Struct prfor
 *
 * @form: The format type.
 * @f: The function associated.
 */
typedef struct prfor
{
	char *form;
	void (*f)(va_list);
} prfor_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_char(va_list va);
void print_integer(va_list va);
void print_float(va_list va);
void print_string(va_list va);
#endif
