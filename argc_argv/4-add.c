#include "main.h"

/**
 * main - print program that multiplies two numbers
 * @argc: num of arguments
 * @argv: num of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{

	int sum = 0, i, j;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}
