#include <stdio.h>
#include "function_pointers.h"

/**
 * array_interior - prints array
 * @array: array element
 * @size: size of array
 * @action: pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int j;

	if (array == NULL || action == NULL)
		return;

	for (j = 0; j < size; j++)
	{
		action(array[j]);
	}
}

