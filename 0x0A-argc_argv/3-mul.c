#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies 2 numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success, 1 on error
 */

int main(int argc, char *argv[])
{
int x; 
int y; 
int result;

x = atoi(argv[1]);
y = atoi(argv[2]);
result = x * y;

for (x = 0; x < result; x++)
if (argc == 3)
{
	printf("%d\n", result);

	return (0);
}
else
{
	printf("Error\n");

	return (1);

}
}
