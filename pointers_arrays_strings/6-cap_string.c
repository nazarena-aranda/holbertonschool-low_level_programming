#include "main.h"
/**
 * *cap_string - function that capitalizes all words of a string
 * @s: pointer to string
 * Return: s
 */

char *cap_string(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			if (i == 0)
			{
				s[i] -= 32;
			}
			else
			{
				switch (s[i - 1])
				{
					case ' ':
					case '\t':
					case '\n':
					case ',':
					case ';':
					case '.':
					case '!':
					case '?':
					case '"':
					case '(':
					case ')':
					case '{':
					case '}':
						s[i] -= 32;
				}
			}
		}
		i++;
	}
	return (s);
}
