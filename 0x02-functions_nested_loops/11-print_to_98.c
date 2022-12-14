#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - function that prints every no tho 98
 * @n: integer from which the counting starts.
 * Return: nothing.
 */


void print_to_98(int n)
{
	int l;

	if (n < 98)
	{
		for (l = n; l <= 98; l++)
		{

			printf("%d, ", l);

		}
	}
	else if (n == 98)
	{
		printf("%d\n", n);
	}
	else
	{
		for (l = n; l >= 98; l--)
		{
			printf("%d, ", l);


		}


	}
	printf("\n");
}
