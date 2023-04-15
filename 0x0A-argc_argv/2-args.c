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
int num;
	for (num = 0; num < argc; num++)
	{
		printf("%s\n", argv[num]);

}
	return (0);
}
