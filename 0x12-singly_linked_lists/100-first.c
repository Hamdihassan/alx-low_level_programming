#include <stdio.h>
#include "lists.h"
#include <string.h>
#include <stdlib.h>

void calledFirst(void) __attribute__ ((constructor));

/**
 * calledFirst - prints statements before main
 * Return: 0
 */

	void calledFirst(void)
{
	printf("You're beat! and yet, you must allow,\\nI bore my house upon my back!\\n");

}
