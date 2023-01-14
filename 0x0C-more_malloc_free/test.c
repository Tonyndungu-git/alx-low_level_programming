#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

long long int *mult(long long int num1, long long int num2)
{

	long long int *mult;

	mult =(long long *)malloc(sizeof(long long int));

	if (mult == NULL)
	{
		return (NULL);
	}

	*mult = num1 * num2;

	return (mult);


}


int main(int argc, char *argv[])
{
	long long int i, j, valid = 1;
	long long int *m;

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
		{	if (!isdigit(argv[i][j]))
			{
				valid = 0;
				break;
				j++;
			}
		}

		i++;
	}

	if (!valid)
	{
		printf("Error\n");
		exit (98);


	}

	long long int num1 = atoi(argv[1]);
	long long int num2 = atoi(argv[2]);

	m = mult(num1, num2);

	printf("%lln\n",m);
	return (0);
}
