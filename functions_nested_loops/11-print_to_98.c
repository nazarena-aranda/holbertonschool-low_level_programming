#include "main.h"
/**
 * print_numbers - print numbers
 * @num: number to print
 * Return: 0
 */


void print_numbers(int num)
{
	int divisor = 1;

	if (num < 0)
	{
		_putchar('-');
		num = num * -1;
	}

	while (num / divisor >= 10)
	{
		divisor = divisor * 10;
	}

	while (divisor > 0)
	{
		_putchar(((num / divisor) % 10) + 48);
		divisor = divisor / 10;
	}

}

/**
 * print_to_98 - prints all number from n to 98
 * @n: number from start
 * Return: 0
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (n = n; n <= 98; n++)
		{
			print_numbers(n);
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else
	{
		for (n = n; n >= 98; n--)
		{
			print_numbers(n);
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	_putchar('\n');
}
