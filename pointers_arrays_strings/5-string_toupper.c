#include "main.h"
/**
 * *string_toupper - string to string upper
 * @s: string
 * Return: pointer to s
 */

char *string_toupper(char *s)
{
	char *p = s;

	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
		{
			*s = *s - 32;
		}
		s++;
	}

	return (p);

}
