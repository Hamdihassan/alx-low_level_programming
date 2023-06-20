#include <stdio.h>

/**
 * main - main function
 * Description: a program that prints the name of the file
 * it was compiled from, followed by a new line.
 * Return: Always 0
 */
int main(void)
{
	printf("%s\n", __MYFILE__);
	return (0);
}
