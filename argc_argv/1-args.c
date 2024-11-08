#include "main.h"

/**
 * main - print the num of the files
 * @argc: num of arguments
 * @argv: num of arguments
 * Return: 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	int i = 0;

	while (i < argc)
	{
		i++;
	}
	printf("%d\n", i - 1);
	return (0);
}
