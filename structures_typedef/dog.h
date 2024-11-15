#ifndef DOG_H
#define DOG_H
#include <stddef.h>
/**
 * struct dog - my first struct
 * @name: name of the dog
 * @age: age from the dog
 * @owner: owner of the dog
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
