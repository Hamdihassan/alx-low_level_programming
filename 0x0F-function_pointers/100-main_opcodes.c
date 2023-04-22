#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int _attribute_((_unused_)) argc, char argv[])
{
	int count,
	char *ch;

	if (argc != 2)

	{
	printf("Error\n");
	exit(1);
	}

	count = atoi(argv[1];
	if (count < 0)
	{
	printf("Error\n");
	Exit(2);
	}

	ch = (char *)main;

		for (i = 0; i < count; i++)
		{
			if (i == count - 1)
			{
			printf("%02hhx\n", ch[i]);
			break;
			}
			printf("%02hhx\n", ch[i]);
			}
			return (0);
}

