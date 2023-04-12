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
	int i = 0;
	int j = 0;
	char *s = (char *)malloc((i + j + 2) * sizeof(char));
	char *p = s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
		i++;

	while (s2[j] != '\0')
	{
		j++;
	}

	if (s == NULL)
	{
		return (NULL);
	}

	while (*s1 != '\0')
	{
		*p = *s1;
		p++;
		s1++;
	}
	while (*s2 != '\0')
	{
		*p = *s2;
		p++;
		s2++;
	}

	*p = '\0';

	return (s);
}
