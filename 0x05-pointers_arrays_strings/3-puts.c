#include "main.h"
/**
 * _puts - function that prints a string
 *@str: prints string
 */
void _puts(char *str)

{
	int _putchar(char c);

	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
