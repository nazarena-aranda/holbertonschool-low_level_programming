#include <stdio.h>
/**
  * main - function entry point, display the alphabet in lowwercase
 * Return: 0
 */

int main(void)
{
	char alphabet_upper, lower;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		putchar(lower);
	}

	for (alphabet_upper = 'A'; alphabet_upper <= 'Z'; alphabet_upper++)
	{
		putchar(alphabet_upper);
	}
	putchar('\n');
	return (0);
}
