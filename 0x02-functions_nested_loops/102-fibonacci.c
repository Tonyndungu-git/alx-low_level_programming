#include <stdio.h>

/**
 * main - prints fibonacci numbers.
 * Return: 0
 */

int main(void)
{
	long n1 = 1;
	long n2 = 2;
	long n3;
	int i;

	printf("%ld, %ld, ", n1, n2);

	for (i = 2 ; i < 50; i++)
	{

		n3 = n2 + n1;
		if (i != 49)
			printf("%ld, ", n3);

		else
			printf("%ld", n3);
		n1 = n2;
		n2 = n3;
	}
	printf("\n");
	return (0);
}
