#include "main.h"
/**
 * rev_string - prints reverse string
 * @s: string
 */
void rev_string(char *s)
{
	int n = 0;

	while (*s != '\0')
	{
	n++;
	s++;
	}

	n--;
        while (s < n)
        {
	tmp = *s;
	*s++ = *n;
	*n-- = tmp;
        }

}
