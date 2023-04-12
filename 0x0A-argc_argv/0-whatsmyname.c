#include<stdio.h>

/**
 * program that prints it's name
 * followed by a new line
 * main() - print the name of the program
 * return; always 0 (success)
 */

int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}	
