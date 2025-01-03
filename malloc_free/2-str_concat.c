#include "main.h"
/**
 * str_concat - concat two string
 * @s1: pointer to string 1
 * @s2: pointer to string 2
 * Return: s1 + s2
 */

char *str_concat(char *s1, char *s2)
{
	int len1, len2, i;
	char *p;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (len1 = 0; s1[len1] != '\0'; len1++)
	{
	}
	for (len2 = 0; s2[len2] != '\0'; len2++)
	{
	}

	p = (char *)malloc((len1 + len2 + 1) * sizeof(char));

	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		p[i] = s1[i];
	}

	for (i = 0; i < len2; i++)
	{
		p[len1 + i] = s2[i];
	}

	p[len1 + len2] = '\0';

	return (p);
}
