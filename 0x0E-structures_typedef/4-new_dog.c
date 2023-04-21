#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - create new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner
 * Return: 0
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int name_len, owner_len, i;
	dog_t *dog_x;

	if (name == NULL || owner == NULL)
	{
		return (0);
	}
	dog_x = malloc(sizeof(dog_x));

	if  (dog_x == NULL)
	{
		return (0);
	}
	name_len = 0;
	while (name[name_len] != '\0')
	{
		name_len++;

	dog_x->name = malloc((name_len + 1)* sizeof(char));
	}
	if (dog_x->name == NULL)
	{
		free(dog_x);
		return (NULL);
	}

	for (i = 0; i <= name_len; i++)
	{
		dog_x->name[i] = name[i];

	dog_x->age = age;
	}
	owner_len = 0;
	while (owner[owner_len] != '\0')
	{
		owner_len++;
	dog_x->owner = malloc((owner_len + 1)* sizeof(char));
	}
	if (dog_x->owner == NULL)
	{
		free(dog_x->name);
		free(dog_x);
		return (NULL);
	}
	for (i = 0; i <= owner_len; i++)
	{
		dog_x->owner[i] = owner[i];
	return (dog_x);
	}
}
}

