#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *malloc_checked - function checks memory allocation
 * @b: unsigned int
 * Return: 0
 */

void *malloc_checked(unsigned int b)
{
int *ptr;

void *ptr = malloc(b);

if (ptr == NULL)
{
	exit(98);
}
else
{
	return (b);
}

}


