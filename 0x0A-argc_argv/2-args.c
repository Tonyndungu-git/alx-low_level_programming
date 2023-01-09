#include <stdio.h>

/**
 * main - prints the arguments.
 * @argc: count of number of arguments.
 * @argv: an array of the arguments.
 * Return: integer.
 */


int main(int argc, char *argv[])
{

	int i = 0;

	for (i = 0; i < argc; i++)
	{

		printf("%s\n", argv[i]);
	}
	return (0);
}
