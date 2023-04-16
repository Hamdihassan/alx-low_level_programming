#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies 2 numbers
 * @argc: argument count
 * @argv: argument vector
 * @x: integer1
 * @y: integer2
 * Return: 0
 */

int main(int argc, char *argv[])
{
int x;
int y;
int result;

result = x * y;

for (y = 0; y < result; y++)
{
for (x = 0; x < result; x++)
{
if (argc == 2)
{
	printf("%d" "%d\n", result, argc);
}

else
{
	printf("Error");
}
}
return (1);
}

}
