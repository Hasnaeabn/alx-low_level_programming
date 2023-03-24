#include "main.h"

/**
 * _isupper -Write a function that checks for lowercase character.
 * parameter c : the caracter to check
 * Return: 1 (if c is uppercase), 0 (otherwise)
 * @c is the parameter int
 */

int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else
		return (0);
}
