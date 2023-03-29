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


	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
       	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';


	return (dest);
}
