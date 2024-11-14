#include "main.h"
/**
 * malloc_checked - function that allocates memory using malloc
 * @b: bytes
 * Return: 0
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = (void *)malloc(b * sizeof(char));

	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
