#include <stdio.h>
#include "main.h"

/**
 * main -  fibonacci numbers.
 * Return: int
 */

int main(void)
{
	int n1 = 0;
	int n2 = 1;
	int n3;
	int i;
	int number;

	number = 100;
	printf("\n%d %d", n1, n2);
	for (i = 2; i < number; ++i)
	{
		n3 = n1 + n2;
		if (n3 > 4000000)
			break;
		printf(" %d", n3);
		n1 = n2;
		n2 = n3;
	}
	printf("\n");
	return (0);
}
