#include"main.h"
#include<stdio.h>

/** _strstr() - see description
 * @haystack: the input string
 * @needle :the string to find
 * Return : pointer to the beginning
 */

char *_strstr(char *haystack, char *needle)
{
	char *a = haystack;
	char *b = needle;

	while(*haystack != '\0')
	{
		a = haystack;
		b = needle;

		while( *a != '\0' && *b != '\0' && *a == *b)
		{
			a++;
			b++;
		}

		if (*b == '\0')
		{
			return(haystack);
		}

		haystack++;
	}

	if (*needle == '\0')
        {
                return(haystack);
        }

	return(NULL);
}
