#include "main.h"
/**
 * print_diagonal - function that draws a diagonal line
 * @n: number of times
 * Return: 0
 */

void print_diagonal(int n)
{
	int a, s;

	if (n > 0)
	{
		for (a = 0; a < n; a++)
		{
			for (s = 0; s < a; s++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
