#include "main.h"
/**
 * *_memcpy - a function that copies memory area
 * @dest: memory location to be copies to
 * @src: source memory area
 * @n: unsigned integer value
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
int r;
int i;

r = 0;
i = n;

for (; r < i; r++)

{

	dest[r] = src[r];

	n--;

}

	return (dest);

}

