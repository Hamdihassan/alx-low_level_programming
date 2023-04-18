#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * init_dog - initializes variable
 * @d: pointer variable
 * @name: variable
 * @age: member variable
 * @owner: member variable
 * Return: 0
 */

void init_dog(struct dog *d, char *name, float age, char *owner)

if (d == NULL)
{

	d = malloc(sizeof(struct dog);

			d->name = name;
			d->age = age;
			d->owner = owner;
}
