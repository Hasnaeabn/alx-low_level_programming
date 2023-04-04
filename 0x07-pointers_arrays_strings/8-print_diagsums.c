#include"main.h"
#include<stdio.h>

/** print_diagsums () - function that prints the sum of the two diagonals
 * of a square matrix of integers.
 * @a : the input array
 * @size : the array size
 * Return : void
 */

void print_diagsums(int *a, int size)
{
	int i;
	int j;
	int s1 = 0;
	int s2 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				s1 = s1 + a[(i * size) + j];
			}
			if (i + j == size - 1)
			{
				s2 = s2 + a[(i * size) + j];
			}
		}
	}

	printf("%d, %d\n", s1, s2);
}
