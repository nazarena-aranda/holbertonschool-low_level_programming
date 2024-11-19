#include "function_pointers.h"
/**
 * print_name - print name use function
 * @*name: name to print
 * @f: pointer to function
 * Return: 0
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
