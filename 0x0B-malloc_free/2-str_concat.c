#include"main.h"
#include<stdlib.h>

/**
 * program that cocntantes
 * str_concat(): functio that concanates 2 strings
 * @s1 : first string
 * s2 : seconde string
 * Return : pointer to the new address, NULL if empty
 */

char *str_concat(char *s1, char *s2)
{
	if (s1 || s2 == NULL)
	{
		s1 = "";
		s2 = "";
	}

	int i = 0;

	while (s1[i] != '\0')
	{
		i++;
	}

	int j = 0;

	while (s2[j] != '\0')
	{
		j++;
	}

	char *s = (char *)malloc( sizeof(char) * (i + j + 1));

	if (s == NULL)
	{
		return (NULL);
	}
	
	int l;

	for (l = 0; l < i + j + 1; l++)
	{
		s[l] = s1[l] + s2[l]
	}
	s[l] = '\0';

	return (s);
}


