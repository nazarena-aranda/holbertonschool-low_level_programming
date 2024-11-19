#include "function_pointers.h"
/**
 * int_index - function that searches for an integer.
 * @array: array
 * @size: size of the array
 * @cmp: comparate integers
 * Return: comparation
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
		return (-1);
	}
}
