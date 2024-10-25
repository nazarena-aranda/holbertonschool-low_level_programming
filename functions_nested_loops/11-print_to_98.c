#include "main.h"
/**
 * print_to_98 - prints all number to 98
 * @n: number from start
 * Return: -
 */

void print_to_98(int n)
{
	for (n = n; n <= 98; n++)
	{
		int i = n;

		if (i < 0)
		{
			_putchar('-');
			i = i * -1;
		}

		if (i >= 10)
		{
			_putchar(i / 10 + 48);
			_putchar(i % 10 + 48);
		}
		else
		{
			_putchar(i + 48);
		}
		if (n != 98)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
