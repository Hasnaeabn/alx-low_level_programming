#include<stdio.h>

/**
 * main -print numbers
 * description : Write a program that prints all single
 * digit numbers of base 10 starting from 0, followed by a new line.
 * You are not allowed to use any variable of type char
 * You can only use the putchar function
 * (every other function (printf, puts, etc…) is forbidden)
 * You can only use putchar twice in your code
 * All your code should be in the main function
 * Return: 0 always (sucess)
 */

int main(void)
{
	int i = 48;

	while (i < 58)
	{
	putchar(i);
	i++;
	}
	putchar('\n');
	return (0);
}
