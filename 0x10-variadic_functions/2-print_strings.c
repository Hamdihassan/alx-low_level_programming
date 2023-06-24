#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include "variadic_functions_h"

/**
 * print_strings - prints strings
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 * Return: 0
 */

void print_strings(const char *separator, const unsigned int n, ...)

{
	va_list args;
	char *str;
	unsigned int j;

	va_start(args, n);

	for (j = 0; j < args; j++)

	{
		str = va_arg(strings, char *);


			if (str == NULL)
				printf("(nil)");
			else
				printf("%s", str);

	if (separator != NULL)
		printf("%d\n", va_args(args, int);

			else if (separator != n - 1)
				printf("nil\n");
				}
				va_end(args);


}


