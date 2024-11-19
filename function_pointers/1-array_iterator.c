#include "function_pointers.h"
/**
 * array_iterator - executes given as a parameter on each element of an array
 * @array: array of elements
 * @size: size of array
 * @action: action that elements
 * Return: 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
