#include"main.h"

/**
 * reset_to_98 - function that takes a pointer to an int as parameter
 * and updates the value it points to to 98.
 * @n : the adress of te variable
 */

void reset_to_98(int *n)
{
	int p = &n;

	*p = 89;
}