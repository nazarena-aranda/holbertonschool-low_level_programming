#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: number
 * Return: the value of the last digit
 */

int print_last_digit(int n)
{
	int a;

	a = n % 10;

	if (a < 0)
		a = a * -1;

	_putchar (a + 48);
	return (a);

}
