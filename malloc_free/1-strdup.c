#include "main.h"
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: pointer to string
 * Return: a pointer to the duplicated string or NULL
 */

char *_strdup(char *str)
{
	int i;
	int longitud = 0;
	char *cp;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			longitud += 1;
		}

		cp = (char *)malloc((longitud + 1) * sizeof(char));

		if (cp == NULL)
		{
			return (NULL);
		}

		for (i = 0; i <= longitud; i++)
		{
			cp[i] = str[i];
		}
	}
	return (cp);

}
