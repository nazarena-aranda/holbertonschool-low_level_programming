#include "main.h"

/**
 * main - print program that multiplies two numbers
 * @argc: num of arguments
 * @argv: num of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int num1 = atoi(argv[1]);
		int num2 = atoi(argv[2]);

		printf("%d\n", num1 * num2);
	}
	return (0);
}
