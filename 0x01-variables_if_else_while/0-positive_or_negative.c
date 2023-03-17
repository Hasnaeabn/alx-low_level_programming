#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
  * main - print type of a random number
  *
  * return: always 0
  * description: if positive print is positive
  * if negative print is negative
  * if equal to 0 print 0
  */


int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n < 0)
		printf("%d is negative\n", n);
	else if (n > 0)
		printf("%d is positive\n", n);
	else
		printf("%d is zero\n", n);
	return (0);
}
