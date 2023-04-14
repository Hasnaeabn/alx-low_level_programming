#include <stdlib.h>


/**
 * descritpion: calloc
 * _calloc - allocate memory for array
 * @nmemb: number of array eemnt
 * @size: the size of bytes of the array
 * Return: the pointer to the allocated memory
 */


void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	char *pt;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);

	pt = p;

	for (i = 0; i < nmemb * size; i++)
	{
		*pt++ = 0;
	}
	return (p);
}
