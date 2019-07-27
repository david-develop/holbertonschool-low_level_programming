#include <stdarg.h>
/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: total number variable passed to the function.
 * Return: sum of all its parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list argum;
	int sum;
	unsigned int i;

	sum = 0;
	if (n == 0)
		return (0);

	va_start(argum, n);

	for (i = 0; i < n; i++)
		sum += va_arg(argum, int);

	va_end(argum);
	return (sum);
}
