#include "main.h"
/**
 * _strcmp - compares string
 * @s1: string 1
 * @s2: string 2
 * Return: str
 */
int _strcmp(char *s1, char *s2)
{
int i;

i = 0;

while (s1[i] && s2[i] != '\0')
{
if (s1[i] != s2[i])
{
return (s1 - s2);

}
}

}
