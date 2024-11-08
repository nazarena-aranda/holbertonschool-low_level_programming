#include "main.h"
/**
 * _sqrt_recursion - function that returns the factorial of a given number
 * @n: number
 * Return: depend
 */

int _sqrt_recursion(int n)
{
	static int i = 1;
	int result;

	if (n < 0)
	{
		i = 1;
		return (-1);
	}
	else if (i * i == n)
	{
		result = i;
		i = 1;
		return (result);
	}
	else if (i * i > n)
	{
		i = 1;
		return (-1);
	}
	i++;
	return (_sqrt_recursion(n));
}
