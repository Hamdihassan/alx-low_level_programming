#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - prints a string
 * @s: character
 * return: 0
 */
void _puts_recursion(char *s)
{
	char n;
	{
	_putchar("%s");
	_puts_recursion(s + 1);
	}
	_putchar('\n');

	return (0);
}

