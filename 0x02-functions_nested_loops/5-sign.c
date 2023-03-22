#include "main.h"

/**
 * print_sign -unction that prints the sign of a number.
 * Return : 1 and prints + if n is greater than zero
 * 0 and prints 0 if n is zero
 * -1 and prints - if n is less than zero
 * n the input parameter
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
