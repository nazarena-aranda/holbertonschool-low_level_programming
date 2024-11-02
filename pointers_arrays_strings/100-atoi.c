#include "main.h"
/**
 * _atoi - function that convert a string to an integer
 * @s: string
 * Return: 0
 */

int _atoi(char *s)
{
	int i = 0;
	unsigned int result = 0;
	int sign = 1;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 48 && s[i] <= 57)
		{
			result = result * 10 + s[i] -  48;
			if (s[i + 1] < 48 || s[i + 1] > 57)
				break;
		}

		if (s[i] == '-')
		{
			sign  = sign * - 1;
		}
	}
	result = result * sign;
	return (result);
}
