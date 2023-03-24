#include "main.h"

/**
 * _isdigit -Write a function that checks for digits.
 * parameter c : the caracter to check
 * Return: 1 (if c is lowercase), 0 (otherwise)
 * @c is the parameter int
 */

int _isdigit(int c)
{
	if (c > 47 && c < 58)
	{
		return (1);
	}
	else
		return (0);
}
