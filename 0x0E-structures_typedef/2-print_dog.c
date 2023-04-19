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
if (d != NULL)
{
	if (d->name == NULL)
	{
		printf("Name:nil\n");
	}
		else
		{
			printf("Name:%s\n", d->name);
	}
	if (d->age == NULL)
	{
	printf("Age: nil");
	}
	else

		printf("Age: %.2f\n", d->age);


	if (d->owner == NULL)
	{
		printf("Owner: nil");
	}
		else
	{
			printf("Owner: %s\n", d->owner);
		}

}
}
