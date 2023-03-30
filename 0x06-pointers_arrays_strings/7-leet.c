#include "main.h"

/**
 * leet -m function that encodes a string into 1337
 *@s : the input string
 *Return : the string coded
 */

char *leet(char *s)
{
    int i, j;
    char *leet_replace = "aAeEoOtTlL";
    char *leet_code = "4433007711";

    for (i = 0; s[i] != '\0'; i++)
    {
	    for (j = 0; leet_replace[j] != '\0'; j++)
	    {
		    if (s[i] == leet_replace[j])
		    {
			    s[i] = leet_code[j];
			    break;
		    }
	    }
    }

    return s;
}
