#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * mult - function that multiplies two numbers.
 * @num1: int 1.
 * @num2: int 2.
 * Return: an int.
 */

long int mult(long int num1, long int num2)
{
	return (num1 * num2);
}

/**
 * main - function that multiplies two numbers.
 * @argc: int of the number of arguments.
 * @argv: array pointer of the arguments.
 * Return: an int.
 */

int main(int argc, char *argv[])
{
	long int i, j, valid = 1;
	long int num1, num2, m;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	i = 1;
	while (i <= 2)
	{
		j = 0;
		while (argv[i][j])
		{
			if (!isdigit(argv[i][j]))
			{
				valid = 0;
				break;
			}
			j++;
		}
		i++;
	}
	if (!valid)
	{
	    printf("Error\n");
	    exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	m = mult(num1, num2);
	printf("%ld\n", m);
	return (0);
}
