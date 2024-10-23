#include "main.h"
#include <ctype.h>
/**
 * _islower  - checks for alphabetic character
 * @c: thing to check
 * Return: 1 if c is a letter, lowercase or uppercase 0 otherwise
 */

int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	else
		return (0);
}
