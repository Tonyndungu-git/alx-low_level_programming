#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the multiplication of two arguments.
 * @argc: count of number of arguments.
 * @argv: an array of the arguments.
 * Return: integer.
 */

int main(int argc, char *argv[])
{
	int n1;
	int n2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);
	printf("%d\n", n1 * n2);


	return (0);


}
