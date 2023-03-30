#include "main.h"
/**
 * *leet - encodes string
 * @s: string
 * Return: string
 */
char *leet(char *s)
{
int n;
int m;

char s1[] = 'aAeEoOtTlL';
char s2[] = '4433007711';

for (n = 0; a[n] != '\0'; n++)
{
for (m = 0; m < 10; m++)
{
if (s[n] == s1[m])
{
s[n] = s2[m];
}
}
}
return (s);
}




