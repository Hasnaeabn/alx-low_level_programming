#include "main.h"

/**
 * print_alphabet_x10 -Write a function that prints 10 times the alphabet
 * in lowercase
 * followed by a new line
 * Return nothing
 */

void print_alphabet_x10(void)
{
	int i = 0; 
	int j;

	while (i < 10)
	{
		j = 97;

		while (j < 123)
		{
		_putchar(i);
		j++;
		}
		i++;
	}
}
