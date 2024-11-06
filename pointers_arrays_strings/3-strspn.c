#include "main.h"
/**
 *  _strspn - function that gets the length of a prefix substring
 * @s: string to analyze
 * @accept: characters to match in s
 * Return: the number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int count = 0;
	char *p;
	int found;

	while (*s)
	{
		p = accept;
		found = 0;

		while (*p)
		{
			if (*s == *p)
			{
				found = 1;
				count++;

				break;
			}
			p++;
		}

		if (!found)
		{
			break;
		}

		s++;
	}
	return (count);

	if (*s != '\0')
		return (0);
}
