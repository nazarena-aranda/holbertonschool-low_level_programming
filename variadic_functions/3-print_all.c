#include "variadic_functions.h"
/**
 * print_all - function that prints anything
 * @format: is a list of types of arguments passed to the function
 * Return: 0
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *p;

	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				p = va_arg(args, char *);
				if (p == NULL)
					printf("(nil)");
				else
					printf("%s", p);
				break;
		}
		if (strchr("cifs", format[i]) && format[i + 1] != '\0')
			printf(", ");

		i++;
	}
	va_end(args);
	printf("\n");
}
