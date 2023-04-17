#ifndef dog_h
#define dog_h

/**
 * struct dog - structure data type
 * @name: member1
 * @age: member2
 * @owner: member3
 * Return: 0
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} grey_dog;

/**
 * init_dog - initializes structure
 * @d: variable
 * grey_dog - typedef for struct dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner);
typedef struct dog grey_dog;




#endif
