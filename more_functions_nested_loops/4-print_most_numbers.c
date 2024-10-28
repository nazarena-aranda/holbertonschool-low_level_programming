#include "main.h"
/**
 * print_most_numbers - print the numbers except 2 and 4
 * Return: 0
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i != 2 && i != 4)
		{
			_putchar (i + 48);
		}
	}
	_putchar('\n');
}
