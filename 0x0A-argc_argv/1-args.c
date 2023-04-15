#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
int i;
if (argc > 1)
{
	for (i = 0; i < argc; i++)
	{
		printf("%d\n", i, argv[0]);
	}
}
else
{
	return (0);
}
}
