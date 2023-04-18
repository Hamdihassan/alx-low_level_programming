#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - prints struct dog
 * struct dog - structure datatype
 * @d: variable
 */

void print_dog(struct dog *d)
{
	 printf("%s, %.1f, %s", d->name, d->age, d->owner);

}
return (0);
