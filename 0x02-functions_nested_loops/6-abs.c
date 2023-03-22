#include "main.h"

/**
 * _abs - function that computes the absolute value of an integer
 * Return : the absolute value of a number
 */

int _abs(int n)
{
	int r = print_sign(n);

	if (r == 1 || r == 0)
	{
		return (n);
	}
	else 
	{
		return (n * (-1));
	}
}
