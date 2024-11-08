#include "main.h"
/**
 * _sqrt_recursion - function that returns the factorial of a given number
 * @n: number
 * Return: depend
 */

int _sqrt_recursion(int n)
{
	int i;

	if (n == 0 || n < 0)
	{
		return (-1);
	}
	else
	       i = 1;

	while (i * i < n)
		i++;

	if (i * i == n)
		return (i);
	return (-1);

}
