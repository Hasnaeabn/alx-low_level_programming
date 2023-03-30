#include "main.h"

/**
 * _strncat - function is similar to the _strcat function
 * Except that it will use at most n bytes from src
 * And src does not need to be null-terminated if it contains n or more bytes
 * @ dest : dest string
 * @ src : source string
 * @ n : number of byte
 * Return : dest
 */

char *_strncat(char *dest, char *src, int n)
{
	
	int l = 0;
	int i = 0;

	while(dest[l] != '\0')
	{
		l++;
	}

	while(i < n && src[i] !='\0')
	{
		dest[l+i] = src[i];
		i++;
	}

	dest[l+i] = '\0';
	return (dest);
}
