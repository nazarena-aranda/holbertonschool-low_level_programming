#include "main.h"
/**
 * reverse_array - function that reverse a array
 * @a: one string
 * @n: two string
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
