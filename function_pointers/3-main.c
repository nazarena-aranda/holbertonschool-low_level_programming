#include "3-calc.h"
/**
 * main - entry point
 * @argc: num of arguments
 * @argv: array of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int num1, num2, result;
	int (*op)(int, int);

	if (argc < 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	op = get_op_func(argv[2]);

	if (op == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	result = op(num1, num2);
	printf("%d\n", result);

	return (0);
}
