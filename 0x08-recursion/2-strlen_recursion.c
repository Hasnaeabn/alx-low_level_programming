#include"main.h"

/**
 * _strlen_recursion() - function that returns the length of z string
 * @s : the string
 * Return : the length of a string
 */

int _strlen_recursion(char *s)
{
	int l;

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		l = 1 + _strlen_recursion(s + 1);
		return(l);
	}
}
