#include"main.h"

/**
 * _strcat - ppends the src string to the dest string
 * overwriting the terminating null byte (\0) at the end of dest
 * and then adds a terminating null byte
 * @dest : destination string
 * @src : source string
 * Return : dest
 */

char *_strcat(char *dest, char *src)
{


	int l = 0;
	int i = 0;

	while (dest[l] != '\0')
	{
		l++;
	}

	while (src[i] != '\0')
       	{
		dest[l+i] = src[i];
		i++;
		
	}

	dest[l+i] = '\0';


	return (dest);
}
