#include "main.h"
/**
 * aux - function that have conditions
 * @n: number
 * @i: iterar
 * Return: depend
 */

int aux(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (n != i && n % i == 0)
	{
		return (0);
	}
	else if (n == i && n % i == 0)
	{
		return (1);
	}
	return (aux(n, i + 1));
}


/**
 * is_prime_number - function that returns the factorial of a given number
 * @n: number
 * Return: depend
 */

int is_prime_number(int n)
{
	return (aux(n, 2));
}
