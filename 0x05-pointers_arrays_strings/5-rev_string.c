#include "main.h"

/**
  * rev_string - function that reverses a string
  * @s: The string to be modified
  *
  * Return: void
  */
void rev_string(char *s)
{
	int i, j, k;
	char *p, l;

	p = s;

	while (s[j] != '\0')
	{
		j++;
	}

	for (k = 1; k < j; k++)
	{
		p++;
	}

	for (i = 0; i < (j / 2); i++)
	{
		l = s[i];
		s[i] = *p;
		*p = l;
		p--;
	}
}
