#include <stdio.h>

/**
 * int_index - function that searches for an integer.
 * @array: input array
 * @size: size of array
 * @cmp: pointer to the function
 *
 * Return: index of the first elemet
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}
