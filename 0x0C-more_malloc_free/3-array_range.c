#include <stdlib.h>

/**
 * description: array
 * array_range - function that creates an array of integers
 * @min: the min value
 * @max: the max value of the array
 * 
 * Return: the pointer to the newly created array, NULL if fails
 */

int *array_range(int min, int max)
{
	int *a;
	int i;
	int size;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	a = malloc(size * sizeof(int));

	if (a == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		a[i] = min++;
	}

	return (a);
}
