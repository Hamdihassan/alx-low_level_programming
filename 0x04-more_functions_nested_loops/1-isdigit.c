#include "main.h"
/**
 * _isdigit - prints digits
 *@c: input number
 * Return: 1 if is a number(0 to 9)otherwise 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
		}
}

