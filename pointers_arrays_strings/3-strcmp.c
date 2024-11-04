#include "main.h"
/**
 * _strcmp - compare two strings
 * @s1: string 1
 * @s2: string 2
 * Return: one string
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
