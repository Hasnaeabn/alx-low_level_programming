#include"main.h"
#include<stddef.h>
/**
 * _strchr() : see description
 * @s : pointer to a string
 * @c : char c
 * Return : a pointer to the first occurence of c
 */

char *_strchr(char *s, char c)
{
	int i;

	for ( i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return &s[i];
		}
	}
	
	return NULL;
	
}
