#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index -  returns the index of the first element for which
 * the cmp function does not return 0
 * @array: an array
 * @size:  is the number of elements in the array array
 * @cmp:  is a pointer to the function to be used to compare values
 * Return: 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int element;

	if (array == NULL && size <= 0 && cmp == NULL)
	return (-1);

	for (element = 0; element < size; element++)
		{
		if (cmp(array[element]))
			return (element);
		}

	return (-1);
}

