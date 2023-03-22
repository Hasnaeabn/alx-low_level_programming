#include"main.h"

/**
 * print_alphabet: -I sometimes suffer from insomnia. And when I can't fall asleep
 * I play what I call the alphabet game
 * description: Write a function that prints the alphabet, in lowercase
 * followed by a new line.
 * Prototype: void print_alphabet(void);
 * You can only use _putchar twice in your code
 * Return : 0(sucess)
 */

void print_alphabet(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
