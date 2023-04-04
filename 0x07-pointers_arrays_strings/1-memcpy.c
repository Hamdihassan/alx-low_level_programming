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
int i;
int m;

int i = 0;
int m = n;

for (; i < m; i++;)
{
	dest[i] = src[i];
	n--;
}
return (dest);

}

