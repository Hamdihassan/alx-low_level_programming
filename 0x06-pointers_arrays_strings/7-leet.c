#include "main.h"
/**
 * *leet - encodes string
 * @a: string
 * Return: string
 */
char *leet(char *a)
{
int n;
int j;

char s1[] = "aAeEoOtTlL";
char s2[] = "4433007711";

for (n = 0; a[n] != '\0'; n++)
{
for (j = 0; j < 10; j++)
{
if (a[n] == s1[j])
{
a[n] = s2[j];
}
}
}
return (a);
}

