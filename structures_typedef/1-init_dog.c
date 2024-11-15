#include "dog.h"
/**
 * init_dog - nitialize a variable of type struct dog
 * @d: pointer to struct dog
 * @name: name of the dog
 * @age: age from the dog
 * @owner: owner of the dog
 * Return: 0
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
