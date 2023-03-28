#include "main.h"

/**
  * _strcpy - Copy a string
  * @dest: the buffer
  * @src: the string to copy
  *
  * Return: the pointer to dest
  */
char *_strcpy(char *dest, char *src)
{
	int i;
	int l;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
		l = i++;
	}

	dest[l] = '\0';

	return (dest);
}
