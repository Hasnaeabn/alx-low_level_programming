#include "main.h"

/**
 * _strcmp - similaire to strcmp
 * @s1 : first string to compare
 * @s2 : seconde string to compare
 * Return : integer
 */

int _strcmp(char *s1, char *s2)
{

	while(*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return *(unsigned char *)s1 - *(unsigned char *)s2;

}
