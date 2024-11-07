#include "main.h"
/**
 * _strlen_recursion - function that returns the length of a string
 * @s: string
 * Return: length of a string
 */

int _strlen_recursion(char *s)
{
	int count;

	if (*s != '\0')
	{
		count = _strlen_recursion(s + 1);
		count = count + 1;
	}
	else
		return (0);

	return (count);
}
