#include "variadic_functions.h"
/**
 * print_strings - prints string  followed by a new line
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *p;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		p = va_arg(args, char *);
		if (p == NULL)
			printf("(nil)");
		else
			printf("%s", p);

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
