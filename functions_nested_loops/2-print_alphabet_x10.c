#include "main.h"
/**
 * print_alphabet_x10 - Prints 10 times the alphabet in lowercase
 * Return: void
 */


void print_alphabet_x10(void)
{
	char n;

	for (n = 0; n < 10; n++)
	{
		char i;

		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}

