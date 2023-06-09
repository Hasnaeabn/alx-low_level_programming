#include "main.h"

/**
  * _strlen - Function that returns the length of a string
  *
  * @s: String to count
  *
  * Return: String length
  */
int _strlen(char *s)
{
	int L = 0;

	for (; *s != '\0'; s++)
	{
		L++;
	}

	return (L);
}
