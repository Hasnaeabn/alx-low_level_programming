#include"main.h"

/**
 * _sqrt_recursion() -function that returns square root of a number
 * @n : the input number
 * Return : the square root of n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return(-1);
	}
	else if (n == 0 || n == 1)
	{
		return n;
	}
	else
	{
		
		{

