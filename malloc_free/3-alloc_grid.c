#include "main.h"
/**
 * alloc_grid - pointer to a 2 dimensional array of integers
 * @width: of the array
 * @height: of the array
 * Return: pointer to a 2 dimensional array of integers.
 */

int **alloc_grid(int width, int height)
{
	int **p, i, j, k;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	p = (int **)malloc(height * sizeof(int *));

	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		p[i] = (int *)malloc(width * sizeof(int));

		if (p[i] == NULL)
		{
			return (NULL);
			
			for (k = 0; k < i; k++)
			{
				free(p[k]);
			}
			free(p);
			return NULL;
		}

		for (j = 0; j < width; j++)
		{
			p[i][j] = 0;
		}
	}
	return (p);
}
