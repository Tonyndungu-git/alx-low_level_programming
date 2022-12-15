#include "main.h"

/**
 *print_most_numbers - prints numbers between 0 to 9 excluding 2 and 4.
 */


void print_most_numbers(void)
{
	int n;

	n = 0;
	while (n <= 9)
	{

		if (n != 2 && n != 4)
		{
			_putchar(n + '0');
		}

		n++;


	}
	_putchar('\n');

}
