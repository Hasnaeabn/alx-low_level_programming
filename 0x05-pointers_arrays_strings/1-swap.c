#include "main.h"

/**
  * swap_int - function that swaps the values of two integers.
  * 
  * @a: First integer to swap
  * @b: Second integer to swap
  *
  * Return: void
  */

void swap_int(int *a, int *b)
{
	int swp;

	swp = *a;
	*a = *b;
	*b = swp;
}
