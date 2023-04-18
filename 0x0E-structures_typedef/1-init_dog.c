#include "dog.h"
#include<stdlib.h>
#include<stdio.h>
#include<string.h>

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
	if (d == NULL)
	{
		printf("Error: Invalid pointer to struct dog. \n");
	}
	
	d->name = (char*)malloc(strlen(name) + 1);
	strcpy(d->name, name);
	d->age = age;
	d->owner = (char*)malloc(strlen(owner) + 1);
	strcpy(d->owner, owner);
}
