#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - prints strings.
 * @n: total number variable passed to the function.
 * @separator: is the string to be printed between the strings.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list argu;
	unsigned int i;
	char *stri;
	char nil[] = "(nil)";

	va_start(argu, n);

	for (i = 0; i < n; i++)
	{
		stri = va_arg(argu, char *);

		if (stri == NULL)
			stri = nil;
		if (i < n - 1)
		{
			if (separator == NULL)
				printf("%s", stri);
				else
					printf("%s%s", stri, separator);
		}
		else
			printf("%s\n", stri);
	}

	va_end(argu);
}
