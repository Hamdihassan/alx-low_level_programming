#include <stdio.h>
#include "lists.h"
#include <string.h>
#include <stdlib.h>

void calledFirst(void) __attribute__ ((constructor));

/**
 * calledFirst - prints statements before main
 */

	void calledFirst(void)
{
	printf("You're beat! and yet, you must allow,\\n");
	printf("I bore my house upon my back!\\n");


}
