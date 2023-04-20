#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: integer
 * @... number of parameters to add
 * va_arg - function
 * Return: 0 if n == 0
 */

int sum_them_all(const unsigned int n, ...)
{
	void sum(void)
	va_list ap;

	{
	va_start(ap, n);
	{
	for (int i = 0; i < n; i++)
	{
		sum += va_arg(ap int);

		printf("%d: %d\n", i, sum);
	}
	}
	{
	va_end(ap);

	return (sum);

}
}
}
