#include <stdio.h>
/**
 * main - function entry point, display the alphabet in lowwercase
 * Return: 0
 */

int main(void)
{
	char alphabet_lowercase;

	for (alphabet_lowercase = 'a'; alphabet_lowercase <= 'z'; alphabet_lowercase++)
	{
		putchar(alphabet_lowercase);
	}
	putchar('\n');
	return (0);

}
