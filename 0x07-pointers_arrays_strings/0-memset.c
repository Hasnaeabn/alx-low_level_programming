#include "main.h"

/**
 * _memset : function fills the first n bytes of the memory area pointed to by s
 * with the constant byte b
 * @s : A pointer to the memory area that needs to be filled with the constant byte b
 * @b : The constant byte that will be used to fill the memory area
 * @n : the number of bytes to be filled
 * Return : s the pointer
 */

char* _memset(char* s, char b, unsigned int n)
{
    
    unsigned int i;
    
    for (i = 0; i < n; i++) 
    {
	    *(s + i) = b;
    }
    
    return s;
}
