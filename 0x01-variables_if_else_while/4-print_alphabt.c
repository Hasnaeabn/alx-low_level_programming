#include<stdio.h>

/**
 * main -print alphabets
 * description: Print all the letters except q and e
 * You can only use the putchar function
 * Every other function (printf, puts, etc…) is forbidden
 * All your code should be in the main function
 * You can only use putchar twice in your code
 * Return: always 0 (sucess)
 */

int main(void)
{
	char ch;
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == 'e' || ch == 'q')
		{
			continue;
		}
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
