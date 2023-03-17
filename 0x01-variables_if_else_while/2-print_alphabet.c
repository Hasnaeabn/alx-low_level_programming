#include<stdio.h>


/**
 * main - print alphabets in lower case
 * description: rite a program that prints
 * the alphabet in lowercase, followed by a new line.
 * You can only use the putchar function
 * (every other function (printf, puts, etc…) is forbidden)
 * All your code should be in the main function
 * You can only use putchar twice in your code
 * Return: always 0 (success)
 */

int main (void)
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar (ch);
	}

	putchar ('\n');

	return (0);
}
