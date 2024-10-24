#include "main.h"
/**
 * print_sign - print the sign of n
 * @n: num to checked
 * Return: 1 if is greter, 0 if is equal and -1 is less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
