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
	
	int i;

	while(*dest != '\0')
	{
		dest++;
	}

	while(i < n && *src !='\0')
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}

	*dest = '\0';
	return (dest);
}

	
