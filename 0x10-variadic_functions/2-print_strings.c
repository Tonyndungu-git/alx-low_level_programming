#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - function that prints strings, followed by a new line.
 * @separator: pointer to a char.
 * @n: length of the no of arguments.
 * Return: void.
 */


void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *aux;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		aux = va_arg(args, char*);
		if (aux == NULL)
			printf("(nil)");
		else
		{
			if (i < (n - 1) && separator != 0)
				printf("%s%s", aux, separator);
			else
				printf("%s", aux);
		}
	}
	va_end(args);
	printf("\n");
}
