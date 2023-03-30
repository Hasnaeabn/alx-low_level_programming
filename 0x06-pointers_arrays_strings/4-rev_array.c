#include "main.h"
#include<stdio.h>

/**
 * reverse_array - function the prints reversed array
 * @a : the array to reverse
 * @n : number of elements of the array
 * Return : void
 */

void reverse_array(int *a, int n)
{
	int i;
	int b;

	for (i = 0; i < (n / 2); i++)
	{
		b = a[i];
		a[i] = a[n -i - 1];
		a[n -i - 1] = b;
	}
}
