#include"main.h"

/**
 * programme to calculate the reveres
 * _print_rev_recursion() : function that prints string in reverse
 *
 * @s : the input string
 * Return : void
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion((s + 1));
	_putchar(*s);
}
