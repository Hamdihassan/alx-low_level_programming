#include <stdio.h>

void calledFirst(void) __attribute__ ((constructor));

/**
 * calledFirst - prints statements before main
 * Return: 0
 */

	void calledFirst(void)
{
	printf("You're beat! and yet, you must allow,\\n");
	printf("I bore my house upon my back!\\n");
}
	int main(void)
{
	return (0);
}
