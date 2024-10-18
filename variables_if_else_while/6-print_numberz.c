#include <stdio.h>
/**
  * main - function entry point, print numbers base 10
  * Return: 0
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar(num + 48);
	}
	putchar('\n');
	return (0);
}
