#include "main.h"
/**
 * print_last_digit - prints last digit
 *@y: prints last digit
 * Return: value of digit
 */

int print_last_digit(int y)
{
int x;


if (y < 0)
y = -y;

x = y % 10;

if (x < 0)
x = -x;

_putchar(x + '0');
return (x);
}


