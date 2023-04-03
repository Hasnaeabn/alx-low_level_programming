#include<stdio.h>

/**
 * main -print lower numbers base 16
 * description: You can only use the putchar function
 * (every other function (printf, puts, etc…) is forbidden)
 * All your code should be in the main function
 * You can only use putchar three times in your code
 * return: 0 always
 */

int main(void)
{
	char ch = 48;
	int i = 'a';

	while (ch < 58)
	{
		putchar(ch);
	}
	while (i < 'g')
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}
