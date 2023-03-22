#include "main.h"

/**
 * _abs - function that computes the absolute value of an integer
 * Return : the absolute value of a number
 */

int _abs(int n)
{
	if (n > 0 || n == 0)
	{
		return (n);
	}
	
	else
	{
		return (n * (-1));
	}
}
