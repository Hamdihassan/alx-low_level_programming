#include "main.h"

/**
 * _tmp - The helper of natural square root
 * @n: character
 * @s: character
 * Return: n
 */

int _tmp(int n, int s)
{
	if (s * s > n)
	{
	return (-1);
	}
	if (s * s == n)
	{
	return (s);
	}
	else
	return (_tmp(n, s + 1));
}
/**
 * _sqrt_recursion - the natural square root of a number
 * @n: character
 * Return: n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
	return (-1);
	}
	else
	return (_tmp(n, 0));
}
