#include "main.h"
/**
 * main - Entry point. Prints alphabet
 * Return: 0
 */


void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}

	_putchar('\n');
}
