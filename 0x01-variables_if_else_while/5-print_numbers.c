#include<stdio.h>

/**
 * main - print numbers
 * description : Write a program that prints all single digit
 * numbers of base 10
 * starting from 0, followed by a new line.
 * Return: 0 always (sucess)
 */

int main(void)
{
       	int i;

	for (i = 0;i < 10; i++)
	{
		printf("%d", i);
	}

	return (0);
}