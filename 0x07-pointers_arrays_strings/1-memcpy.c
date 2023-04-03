#include "main.h"

/**
 * _memcpy() : function that copies n bytes from area memory src
 * to memory area dest
 * @src : memory source
 * @dest : memory destination
 * @n : number of bytes to copy
 * Return : dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}

	return (dest);
}
