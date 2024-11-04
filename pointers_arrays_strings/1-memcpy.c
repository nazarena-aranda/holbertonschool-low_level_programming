#include "main.h"
/**
 * *_memcpy - function that copies memory area
 * @src: string
 * @dest: constant byte
 * @n: bytes of the memory area
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *p = dest;

	while (n > 0)
	{
		*p++ = *src++;
		n--;
	}

	return (dest);
}
