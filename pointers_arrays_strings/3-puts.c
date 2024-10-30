#include "main.h"
/**
 * _puts - prints a string
 * @str: string
 * Return: 0
 */

void _puts(char *str)
{
	while (*str > 0 && *str != '\0')
		_putchar(*str++);
	_putchar ('\n');
}
