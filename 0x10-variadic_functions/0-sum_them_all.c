#include <stdio.h>
#include <stdarg.h>
#include <string.h>

/**
 * sum_them_all -  function that returns the sum of all its parameters.
 * @n: integer
 * @va_end: ends argument list
 * Return: 0
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0;

	va_list count;
	unsigned int i;

	va_start(count, n);

	for (i = 0; i < n; i++)
		sum += va_arg(count, int);

	va_end(count);
	return (sum);
}
