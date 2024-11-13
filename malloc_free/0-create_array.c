#include "main.h"
/**
 * create_array - creates an array of chars
 * @size: size of the array
 * @c: characters
 * Return: A pointer to the array, or NUL
 */


char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		p = (char *)malloc(size * sizeof(char));

		if (p == NULL)
		{
			return (NULL);
		}

		for (i = 0; i < size; i++)
			p[i] = c;
	}
	return (p);
}
