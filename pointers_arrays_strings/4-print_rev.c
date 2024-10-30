#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: pointer to string
 * Return: 0
 */

void print_rev(char *s)
{
	while (*s > 0  && *s == '\0')
                _putchar(*s--);
        _putchar ('\n');
}
