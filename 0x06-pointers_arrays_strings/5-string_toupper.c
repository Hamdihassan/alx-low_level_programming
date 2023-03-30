#include "main.h"
/**
 * *string_toupper - string to uppercase
 * @s: string
 * Return: uppercase
 */
char *string_toupper(char *s)
{
int i;

i = 0;

while (s[i] != '\0')
{
if (s[i] >= 'a' && s[i] <= 'z')
{
S[i] = s[i] - 32;
i++;
}
}
return (s);
}
