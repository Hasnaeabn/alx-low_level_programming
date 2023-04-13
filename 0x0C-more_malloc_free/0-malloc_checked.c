#include<stdlib.h>

/**
 * program to check the malloc function
 * malloc_checked()-function to check malloc
 *@b : the number of bytes to allocate
 *Return : 98 if faillure, pointer if success
 */

void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
