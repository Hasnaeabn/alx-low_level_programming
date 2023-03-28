#include "main.h"

/**
 * puts_half - function that prints the second half
 * if the lenght of the string is odd
 * @str : the string to work on
 * Return : void
 */

void puts_half(char *str)
{
	int l =0;
	int j;
	int n;

	for (; str[j] != '\0'; j++)
	{
		l++;
	}

	if (l % 2 != 0)
	{
		n = (l - 1)/2;
	}

	else 
	{
		n = l / 2;
	}
	for (; n < l; n++)
		{
			_putchar(str[n]);
		}
	_putchar('\n');
	
}
