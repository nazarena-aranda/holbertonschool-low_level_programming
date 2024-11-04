#include "main.h"
/**
 * *_memset - unction that fills memory with a constant byte.
 * @s: string
 * @b: constant byte
 * @n: bytes of the memory area
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n > 0)
	{
		*p++ = b;
		n--;
	}

	return (s);
}
