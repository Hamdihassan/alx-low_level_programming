#ifndef dog_h
#define dog_h

/**
 * struct dog - structure data type
 * @name: member1
 * @age: member2
 * @owner: member3
 * Return: 0
 */
struct dog
{
	char *name;
	float age;
	char *owner;
} *d;

/**
 * init_dog - initializes structure
 * @d: variable
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
