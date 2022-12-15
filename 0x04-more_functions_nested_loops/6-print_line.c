#include "main.h"

/**
 * print_line - prints the number of lines of int n
 *@n: integer
 */

void print_line(int n)
{

	int l;

	for (l = 0; l < n; l++)
	{

		if (n > 0)
			_putchar(95);
		else
			_putchar('\n');

	}
	_putchar('\n');
}
