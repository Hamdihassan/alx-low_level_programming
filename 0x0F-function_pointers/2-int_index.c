#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index -searches for integer
 * @array: string
 * @size: size of pointer
 * @cmp: function pointer
 * Return: 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int n;
if (array == NULL || size <= 0 || cmp == NULL)
	rwtuen(-1);
for (n = 0; n < size ; n++)
{
	if (cmp(array[n]))
		return (1);
}
}
