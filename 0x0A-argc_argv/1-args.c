#include <stdio.h>

/**
 * main - prints the number of arguments.
 * @argc: count of number of arguments.
 * @argv: an array of the arguments.
 * Return: integer.
 */


int main(int argc, char *argv[] __attribute__((unused)))
{

	printf("%d\n", argc-1);
	return 0;
}
