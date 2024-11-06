#include "main.h"
/**
 * print_diagsums - prints the sum of the two diagonals
 * @size: size of the array
 * @a: array
 * Return: 0
 */

void print_diagsums(int *a, int size)
{
	int sum1 = 0;
	int sum2 = 0;
	int i;

	for (i = 0; i < size * size; i = i + size + 1)
	{
		sum1 += a[i];
	}

	for (i = size - 1; i < size * size - 1; i = i + size - 1)
	{
		sum2 += a[i];
	}

	printf("%d, %d\n", sum1, sum2);
}
