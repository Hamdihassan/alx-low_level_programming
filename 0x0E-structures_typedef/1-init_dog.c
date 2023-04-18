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
{
//while (d != \0)
//	malloc(sizeof(struct dog));
//	("%s, %1f, %s", d->name, d->age, d->owner)
struct dog d;

init_dog(&d, "Poppy", 3.5, "Bob");
//strcpy("%s, %1f, %s", d->name, d->age, d->owner);
}

