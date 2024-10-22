#include "main.h"
#include <ctype.h>
/**
 * _islower(int c) - find cases lowercase
 * Return: 1 if c is lowercase 0 otherwise
 */

int _islower(int c) {

	if (islower(c))
		return (1);
	else
		return (0);
}
