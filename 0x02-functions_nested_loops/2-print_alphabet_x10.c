#include "main.h"

/**
 * print_alphabet_x10- function that prints the alphabet, lowercase ten times.
 * You can only use _putchar twice in your code
 * Return: nothing.
 */

void print_alphabet_x10(void)
{

	char c;
	int i;

	i = 0;

	while (i < 10)
	{

		c = 'a';

		while (c <= 'z')

		{
			_putchar(c);
			c++;

		}


		_putchar('\n');
		i++;

	}


}
