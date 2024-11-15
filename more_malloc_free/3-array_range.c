#include "main.h"
/**
 * array_range - function that creates an array of integers
 * @min: number min
 * @max: number max
 * Return: array
 */

int *array_range(int min, int max)
{
	int size, i, *p;

	if (min > max)
	{
		return (NULL);
	}

	size = max - min + 1;
	p = (int *)malloc(size * sizeof(int));

	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		p[i] = min + i;
	}
	return (p);
}
