#include "main.h"
/**
 * *_strncpy - function appends the src string to the dest string times n
 * @dest: end
 * @src: start
 * @n: bytes from src
 * Return: a pointer to the resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *i = dest;

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}

	return (i);
}
