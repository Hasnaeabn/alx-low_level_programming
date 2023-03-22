#include "main.h"

/**
 * int _islower(int c) -Write a function that checks for lowercase character.
 * Returns 1 if c is lowercase
 * Returns 0 otherwise
 */

int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}

	else 
		return (0);
}
