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

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		char *arg = va_arg(args, char *);

		printf("%s", arg);

		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
		if (args == NULL)
			printf("nil");
	}
	va_end(args);
	printf("\n");
}
