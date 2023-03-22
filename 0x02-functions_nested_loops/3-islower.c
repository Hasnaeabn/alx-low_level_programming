#include "main.h"

/**
 * int _islower(int c) -Write a function that checks for lowercase character.
 * Return: 1 (if c is lowercase), 0 (otherwise)
 * c is the parameter int
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
