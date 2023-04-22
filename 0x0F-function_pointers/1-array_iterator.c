#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - executes a function
 * @array: pointer
 * @size: elements to print
 * @action: pointer
 * Return: 0
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (array == NULL || action == NULL)
		return;
	for (x = 0; x < size; i++)
	{
		action(array[x]);


	}
}

