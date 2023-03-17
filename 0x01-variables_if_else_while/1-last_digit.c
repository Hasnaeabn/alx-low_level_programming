#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -the last digit
 *
 * description: The output of the program should be:
 * The string Last digit of, followed by
 * n, followed by
 * the string is, followed by
 * if the last digit of n is greater than 5: the string and is greater than 5
 * if the last digit of n is 0: the string and is 0
 * if the last digit of n is less than 6 and not 0:
 * the string and is less than 6 and not 0
 * Return: always 0 (success)
 */

int main(void)
{
	int n;
	int lg;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lg = n % 10;
	if (lg > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, lg);
	else if (lg == 0)
		printf("Last digit of %d is %d and is 0\n", n, lg);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lg);

	return (0);
}
