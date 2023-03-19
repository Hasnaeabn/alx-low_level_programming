#include<stdio.h>

/**
 * main -print lowercase alphabets
 * description : You can only use the putchar
 * function (every other function (printf, puts, etc…) is forbidden)
 * All your code should be in the main function
 * You can only use putchar twice in your code
 * Return : 0 always (sucess)
 */

int main(void)
{
	char ch = 'z';
	while(ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');

	return (0);
}
	
