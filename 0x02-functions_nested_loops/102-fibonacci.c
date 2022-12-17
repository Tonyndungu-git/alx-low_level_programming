#include <stdio.h>

/**
 * main - prints fibonacci numbers.
 * Return: 0
 */

int main(void)
{
	int n1 = 0;
	int n2 = 1;
	int n3;
	int i;

	printf("%d, %d, ", n1, n2);

	for (i == 2 ; i <= 50; i++)
	{
		n3 = n2 + n1;
		printf("%d, ", n3);
		n1 = n2;
		n2 = n3;
	}
	printf("\n");
	return (0);
}
