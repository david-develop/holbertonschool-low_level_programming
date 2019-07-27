#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints numbers, followed by a new line.
 * @n: total number variable passed to the function.
 * @separator: is the string to be printed between numbers.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list argum;
	unsigned int i;

	va_start(argum, n);

	for (i = 0; i < n; i++)
	{
		if (i < n - 1)
		{
			if (separator == NULL)
				printf("%d", va_arg(argum, int));
			else
				printf("%d%s", va_arg(argum, int), separator);
		}
		else
			printf("%d\n", va_arg(argum, int));
	}

	va_end(argum);
}
