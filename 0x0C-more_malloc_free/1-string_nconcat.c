#include<stdlib.h>
#include<string.h>
/**
 * Description : progrma that concatantes two strings
 * string_nconcat() - function to answer to the program
 * @s1 : first string
 * @s2 : second string
 * @n : first n bytes of s2
 * Return : pointer to newlly allocated space 
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = strlen(s1);
	unsigned int len2 = strlen(s2);
	char *p;
	unsigned int i = 0;
	unsigned int j = 0;
	
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n >= len2)
		n = len2;
	
	p = malloc(len1 + n + 1);
	if (p == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		p[i] = s1[i];

	for (j = 0; j < n; j++)
		p[len1 + j] = s2[j];

	p[len1 + n] = '\0';

	return (p);
}
