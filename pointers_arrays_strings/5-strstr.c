#include "main.h"
/**
 * *_strstr - function that locates a substring
 * @haystack: string
 * @needle: substring
 * Return: substring
 */

char *_strstr(char *haystack, char *needle)
{
	char *i;
	char *p;

	while (*haystack)
	{

		i = needle;
		if (*haystack == *i)
		{
			p = haystack;
			while (*haystack && *i && *haystack == *i)
			{
				haystack++;
				i++;
			}

			if (*i == '\0')
			{
				return (p);
			}
		}

		haystack++;
	}
	return (NULL);
}
