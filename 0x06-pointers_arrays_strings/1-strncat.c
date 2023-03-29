#include "main.h"
/**
 * _strncat - concatenate strings
 * @dest: concat string
 * @src: concat string
 * @n: string
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
int i;
int j;

i = 0;

while  (dest[i] != '\0')
{
	i++;
}

j = 0;

while (j < n && src[j] != '\0')
{
	dest[i] = src[j];
	j++;
	i++;
}
return (dest);








}
