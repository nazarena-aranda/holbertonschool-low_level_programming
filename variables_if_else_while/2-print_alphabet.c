#include <stdio.h>
/**
 * main - function entry point, display the alphabet in lowwercase
 * Return: 0
 */

int main(void)
{
	char alphabet_lowcase;

	for (alphabet_lowcase = 'a'; alphabet_lowcase <= 'z'; alphabet_lowcase++)
	{
		putchar(alphabet_lowcase);
	}
	putchar('\n');
	return (0);

}
