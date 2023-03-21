#include "main.h"
/**
* _isalpha - alphabetic character
* @c: c is a letter
* Return: 1 if c is lowercase/uppercase, otherwise 0
*/
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
	return (1);
}
else
{
	return (0);
}
}
