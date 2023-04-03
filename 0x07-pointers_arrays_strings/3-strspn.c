#include"main.h"

/** _strspn() see description
 * @s : initial segement
 * @accept : bytes from accept
 * Return : the number of bytes in the initial segment of s which consis
 * only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	int found;

	for (; *s != '\0'; s++)
	{
		found = 0;
		
		for (; *accept !='\0'; accept++)
		{
			if (*s == *accept)
			{
				found = 1;
				break;
			}
		}
		
		if (found == 1)
		{
			i++;
		}
		
		else 
		{
			break;
		}
	}

	return(i);
}
