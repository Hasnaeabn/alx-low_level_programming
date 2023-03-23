#include "main.h"
#include "main.c"

/**
 * main - test function
 * description:est that the function positive_or_negative() gives
 * the correct output when given a case of 0
 * Return : 0 always (sucess).
 */

int main(void)
{
	int i;

	i = 0;

	positive_or_negative(i);
	return (0);
}
