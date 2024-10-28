#include "main.h"
/**
 * more_numbers - function that prints 10 times the numbers, from 0 to 14
 * Return: 0
 */


void more_numbers(void)
{
	int f, c;

	for (f = 0; f < 10; f++)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c >= 10)
			{

				_putchar((c / 10) + 48);
			}
			_putchar((c % 10) + 48);

		}
		_putchar('\n');
	}
}
