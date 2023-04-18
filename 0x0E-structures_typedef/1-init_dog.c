#include "dog.h"

/**
 * program to initialize a function
 * init_dog - function that initialize a variable of type struct dog
 * @d : struct dog
 * @name : first variable
 * @age : age
 * @owner : owner
 * Return : void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
