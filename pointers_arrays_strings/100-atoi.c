#include "main.h"
/**
 * _atoi - function that convert a string to an integer
 * @s: string
 * Return: 0
 */

int _atoi(char *s)
{
	int i = 0;
	int result = 0;
	int temp = '+';

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 48 && s[i] <= 57)
		{
			if (i > 0)
			{
				if (s[i - 1] == '+' || s[i - 1] == '-')
				{
					temp = s[i - 1];
				}
			}
			result = result * 10 + s[i] -  48;
		}
	}
	if (temp == '-')
		result = result * -1;
	return (result);
}
