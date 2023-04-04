#include "main.h"
/**
 * *_memset - function that fills memory with a constant byte
 * @s: address of memory to fill
 * @b: address of memory to print
 * @n: size of memory to print
 * Return: 0
 */

char *_memset(char *s, char b, unsigned int n)
{
int i;

i = 0;

for (; n > 0; i++)
{
	s[i] = b;
	n--;
}
return (s);
}
