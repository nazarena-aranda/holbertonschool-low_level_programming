#include "main.h"
/**
 * *_strcpy - copies the string pointed
 * @dest:destination
 * @src: from
 * Return:the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest = dest + '\0';

	return (dest);
}
