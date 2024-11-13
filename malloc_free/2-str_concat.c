#include "main.h"
/**
 * str_concat - 
 * 
 *
 */

char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *p;

	if (s1 == NULL)
	{
		s1 = "";
	}
	else if (s2 == NULL)
	{
		s2 = "";
	}

	for (i = 0; s1[i] != '\0'; i++);
	for (j = 0; s2[j] != '\0'; j++);

	p = (char *)malloc((i + j + 1) * sizeof(char));

	if (p == NULL)
	{
		return (NULL);
	}

	for (k = 0; k < i; k++)

	return (p);

}
