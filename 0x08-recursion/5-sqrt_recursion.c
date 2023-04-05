#include "main.h"
/**
 * _tmp - helper function
 * @x: integer
 * @n: integer
 * Return: 0
 */

int _tmp(int n, int x)
{
	if (x * x > n)
	{
		return (-1);
	}
	if (x * x == n)
	{
		return (x);
	}
	else
	{
		return (_tmp(n, x + 1));
}
/**
 *  _sqrt_recursion - returns the natural square root of a number
 *  @n: integer
 *  Return: 0
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (_tmp(n, 0));
				}
}
}

