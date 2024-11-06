#include "main.h"
/**
 * *_strpbrk - function that searches a string for any of a set of bytes
 * @s: string to analyze
 * @accept: characters to match in s
 * Return: A pointer to the byte in s that matches one of the bytes in accept
 */

char *_strpbrk(char *s, char *accept)
{
	char *p;

	while (*s)
	{
		p = accept;

		while (*p)
		{
			if (*s == *p)
			{
				return (s);
			}
			p++;
		}

		s++;
	}
	return (NULL);
}
