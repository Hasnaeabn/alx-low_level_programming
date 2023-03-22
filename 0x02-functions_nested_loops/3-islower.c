#include "main.h"

/**
 * _islower -Write a function that checks for lowercase character.
 * parameter c : the caracter to check
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
