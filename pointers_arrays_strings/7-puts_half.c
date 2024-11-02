#include "main.h"
/**
 * puts_half - function that prints half of a string
 * @str: string
 * Return: 0
 */

void puts_half(char *str)
{
	int i, mitad, c;

	while (str[i] != '\0')
		i++;

	if (i % 2 == 0)
	{
		mitad = i / 2;
	}
	else
	{
		mitad = ((i - 1) / 2 + 1);
	}
	for (c = mitad; c < i; c++)
		_putchar(str[c]);

	_putchar('\n');
}
