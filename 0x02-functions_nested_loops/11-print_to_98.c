#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - function that prints every no tho 98
 * @n: integer from which the counting starts.
 * Return: nothing.
 */


void print_to_98(int n)
{

	if (n < 98)
	{
		for (; n < 98; n++)
		{

			printf("%d, ", n);

		}
	}
	else if (n == 98)
	{
		printf("%d\n", n);
	}
	else
	{
		for (; n > 98; n--)
		{
			printf("%d, ", n);


		}


	}
	printf("\n");
}
