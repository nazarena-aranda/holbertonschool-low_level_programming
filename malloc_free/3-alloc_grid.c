#include "main.h"
/**
 * alloc_grid - function that returns a pointer to a 2 dimensional array of integers
 * @width: of the array
 * @height: of the array
 * Return: pointer to a 2 dimensional array of integers.
 */

int **alloc_grid(int width, int height)
{
	int *p;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	p = (int **)malloc(height * sizeof(int *));

	if (p == NULL)
	{
		return (NULL);
	}
}
