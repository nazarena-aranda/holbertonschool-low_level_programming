#include "main.h"
/**
 * *leet - function
 * @s: string
 * Return: 0
 */

char *leet(char *s)
{
	char *p = s;
	unsigned int i;
	char leet[] = "aAeEoOtTlL";
	char leet2[] = "4433007711";

	while (*s)
	{
		for (i = 0; i < sizeof(leet) / sizeof(char); i++)
		{
			if (*s == leet[i])
			{
				*s = leet2[i];
			}
		}
		s++;
	}
	return (p);
}
