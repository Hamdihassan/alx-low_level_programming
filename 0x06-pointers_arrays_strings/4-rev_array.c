#include "main.h"
/**
 * reverse_array - reverse arrays
 * @a: array
 * @n: array
 * Return: array
 */
void reverse_array(int *a, int n)
{
int i;
int k;

	for (i = 0; i < n--; i++)
	{
		k = a[i];
		a[i] = a[n];
		a[n] = k;
	}
}
