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
	int n;
	

	for (; str[l] != '\0'; l++)
	{
		l++;
	}

	if (l % 2 != 0)
	{
		n = (l - 1)/2;
		n = n + 1;
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
