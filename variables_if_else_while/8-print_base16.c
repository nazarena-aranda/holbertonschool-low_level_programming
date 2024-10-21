#include <stdio.h>
/**
 * main - function entry point, print number base 16
 * Return: 0
 */

int main(void)
{
	char num;

	for (num = 0; num <= 15; num++)
	{
		if (num < 10)
			putchar(num + 48);
		else
			putchar('a' + (num - 10));
	}
	putchar('\n');
	return (0);
}
