#include"main.h"
/**
 * string_toupper - function that changes all lower cases letter to upper
 *@s : the input string
 *Return : the input string S in uppercase
 */

char *string_toupper(char *s)
{
    int i;

    for (i = 0; s[i] != '\0'; i++)
    {
	    if (s[i] >= 'a' && s[i] <= 'z')
	    {
		    s[i] = s[i] - ('a' - 'A');
	    }
    }

    return s;
}
