#include "main.h"

/**
 * main - print the name of the files
 * @argc: num of arguments
 * @argv: num of arguments
 * Return: 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
