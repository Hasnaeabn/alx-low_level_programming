#include "main.h"

/**
 * _strcmp - similaire to strcmp
 * @s& : first string to compare
 * @s2 : seconde string to compare
 * Return : integer
 */

int _strcmp(char *s1, char *s2)
{
	int n = 15;
	if (s1 < s2)
		n = n * (-1);
	else if (s1 > s2)
		n = n * 1;
	else 
		n = n * 0;
	
	return(n);
}
