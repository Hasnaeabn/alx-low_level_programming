#include"main.h"
#include <stdlib.h>

/**
 * create_array() -function that creates array of chars
 * @size : the size of array
 * @c : the input array
 * Return: pointer to the array or NULL if @size =0 or fails
 */

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	a = malloc(sizeof(char) * size);

	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		a[i] = c;
	}

	return (a);
}
