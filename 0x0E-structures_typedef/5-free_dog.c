#include <stdlib.h>
#include "dog.h"
/**
 * program
 * free_dog - function to free dog
 * @d: structure to free
 * Return: void
 */


void free_dog(dog_t *d) 
{
    if (d != NULL)
    {
	free(d->name);
        free(d->owner);
        free(d);
    }
}