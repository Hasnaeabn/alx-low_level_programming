#include"main.h"
#include<stdlib.h>

/**
 * Program to copy string
 * _strdup():function that returns a pointer to a
 * newly allocated space in memory
 * which contains a copy of the string given as a parameter.
 * @str : the input string
 * Return: pointer to an new string duplicated of str, NULL if str = NULL
 */

char *_strdup(char *str)
{
	int i = 0;
	int j = 0;
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[i] != '\0')
	{
		i++;
	}

	s = malloc(sizeof(char) * (i + 1));
	if (s == NULL)
	{
		return (NULL);
	}

	for (j = 0; j <= i; j++)
	{
		s[j] = str[j];
	}
	return (s);
}
