#include"main.h"
#include<stdio.h>

/** _strpbrk() - function that searches a string for any of a set of bytes.
 * @s : the string to check
 * @accept : bytes in the string
 * Return :a pointer to the byte in s that matches one of the bytes in accept
 *  or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	char *p;

	for (; *s != '\0'; s++)
	{
		for (p = accept; *p != '\0'; p++)
		{
			if (*s == *p)
			{
				return(s);
			}
		}
	}
	return(NULL);
}
