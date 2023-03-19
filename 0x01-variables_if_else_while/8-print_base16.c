#include <stdio.h>
/**
* main - program that print base 16 in lowercase
*Return: 0
*/

int main(void)
{
int i;
char ch;
for (i = 0; i <= 16; i++)
{
putchar(i);
}
for (ch = 'a'; ch <= 'f'; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
