#include "main.h"
/**
 * *_strcat - function appends the src string to the dest string
 * @dest: end
 * @src: start
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	char *i = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (i);
}
