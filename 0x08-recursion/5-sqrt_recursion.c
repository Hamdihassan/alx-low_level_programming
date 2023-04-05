#include "main.h"
/**
 * _helper - helper function
 * @x: integer
 * @n: integer
 * Return: n
 */

int _helper(int n, int x)
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
		return (_helper(n, x + 1));
}
/**
 *  _sqrt_recursion - returns the natural square root of a number
 *  @n: integer
 *  Return: n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else

		return (_helper(n, 0));

}
}

