#include "main.h"

/**
 * _isalpha -function that checks for alphabetic character.
 * Return: 1 if alpahbets, 0 otherwise
 * entree c as code ASCII of thr caracter
 */

int _isalpha(int c)
{
	if((c > 96 && c < 123) || ( c > 64 && c < 91))
	{
		return (1);
	}
	else
		return (0);
}
