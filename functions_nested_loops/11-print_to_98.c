#include "main.h"
/**
 * print_to_98 - prints all number to 98
 * @n: number from start
 * Return: -
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (n = n; n <= 98; n++)
		{
			if (n != 98)
			{
				if (n > 10)
				{
					_putchar(n / 10);
					_putchar(n % 10);
					_putchar(',');
					_putchar(' ');
				}
				else
				{
					_putchar(n + 48);
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar(n + 48);
		}
	}
	_putchar('\n');
}
