#include "main.h"

/**
 * print_alphabet_x10 -Write a function that prints 10 times the alphabet
 * in lowercase
 * followed by a new line
 * Return nothing
 */

void print_alphabet_x10(void)
{
	int i = 97; 
	int j;

	while (i < 123)
	{
		j = 0;

		while (j < 11)
		{
		_putchar(i);
		j++;
		}
		i++;
	}
}
