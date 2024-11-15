#include "main.h"
/**
 * _calloc - function that allocates memory for an array
 * @nmemb: number of elements
 * @size: size of the elemts
 * Return: 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int total, i;
	char *p;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	total = (nmemb * size);

	p = (char *)malloc(total * sizeof(char));

	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < total; i++)
	{
		p[i] = 0;
	}
	return (p);
}
