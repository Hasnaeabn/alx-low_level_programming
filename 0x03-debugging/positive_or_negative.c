#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
  * main - print type of a random number
  *
  * Return: always 0(success)
  * description: if positive print is positive
  * if negative print is negative
  * if equal to 0 print 0
  */


void positive_or_negative(int n)
{


	if (n < 0)
		printf("%d is negative\n", n);
	else if (n > 0)
		printf("%d is positive\n", n);
	else
		printf("%d is zero\n", n);

}
