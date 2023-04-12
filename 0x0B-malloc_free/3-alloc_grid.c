#include"main.h"
#include<stdlib.h>

/**
 * programe description : that shwos 2 dimenssion array
 * alloc_grid(): function points to a 2 dim array
 * @width : the width of the grid
 * @height : the height of the grid
 * Return : pointer to the array, NULL if height or width are 0
 * NULL on failure
 */

int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **p = malloc(sizeof(int *) * height);

	if (width <= 0 || height <= 0)
		return (NULL);
	if (p == NULL)
		return(NULL);
	for (i = 0; i < height ; i++)
	{
		p[i] = malloc(sizeof(int) * width);
		if (p[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(p[j]);
			}
			free(p);
			
			return (NULL);
		}
		
		for (j = 0; j < width; j++)
		{
			p[i][j] = 0;
		}
	}
	return (p);
}
