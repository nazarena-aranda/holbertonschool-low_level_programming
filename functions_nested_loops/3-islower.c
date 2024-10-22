#include "main.h"
#include <ctype.h>
/**
 * _islower  - find cases lowercase
 * @c: the letter to be checked
 * Return: 1 if c is lowercase 0 otherwise
 */

int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);
}
