#include "main.h"
/**
 * print_alphabet_x10 - print alphabetx10
 */
void print_alphabet_x10(void)
{
char ch;
int num;
for (num = 0; num < 10; num++)
{
for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
}
_putchar('\n');
}
}
