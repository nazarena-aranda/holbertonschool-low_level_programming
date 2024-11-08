#include "main.h"
/**
 * aux - function that have conditions
 * @n: number
 * @i: iterar
 * Return: depend
 */

int aux(int n, int i)
{
	if (n < 0 || n == 0)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	if (i * i > n)
	{
		return (-1);
	}
	return (aux(n, i + 1));
}

/**
 * _sqrt_recursion - function that returns the factorial of a given number
 * @n: number
 * Return: depend
 */

int _sqrt_recursion(int n)
{
	return (aux(n, 1));
}
