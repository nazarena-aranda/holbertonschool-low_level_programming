#include "main.h"
/**
 * *_strncat - function appends the src string to the dest string times n
 * @dest: end
 * @src: start
 * @n: bytes from src
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	char *i = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	*dest = '\0';
	return (i);
}
