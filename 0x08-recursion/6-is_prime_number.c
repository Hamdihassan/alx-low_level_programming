#include "main.h"
/**
 * _tmp - helper function that prints prime no.
 * @n: integer
 * @x: integer
 * Return: n
 */
int _tmp(int n, int x)
{
if (x == 1)
{
	return (1);
}
if (n % x == 0 && x > 0)
{
	return (0);
}

	return (_tmp(n, x - 1));
}

/**
 * is_prime_number - function that returns 1 if
 * the input int is a prime number
 * @n: integer
 * Return:  n
 */

int is_prime_number(int n)
{
if (n <= 1)
{
	return (0);
}
	return (_tmp(n, n - 1));
}
