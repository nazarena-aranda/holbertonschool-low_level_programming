#include "main.h"
/**
 * _abs - absolute value of an integer
 * @n: integer
 * Return: positive number
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
