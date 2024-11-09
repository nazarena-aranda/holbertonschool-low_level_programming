#include "main.h"

/**
 * main - print program that multiplies two numbers
 * @argc: num of arguments
 * @argv: num of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);

	if (argc < 2)
	{
		printf("Error\n");
		return (-1);
	}
	else
	{
		printf("%d\n", num1 * num2);
	}
	return (0);
}
