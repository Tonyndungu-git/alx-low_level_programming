#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer to a 2 dim array of integers.
 * @width: input integer for the width.
 * @height: input integer for the height.
 * Return: pointer fo a function.
 */



int **alloc_grid(int width, int height)
{
	int i;
	int **n;

	if (width <= 0 || height <= 0)
	{
		return (NULL);

	}

	n = malloc(width * sizeof(int *));

	i = 0;

	while (i < height)
	{
		n[i] = malloc(width * sizeof(int));
		i++;
	}

	return (n);

	if (n == NULL)
		return (NULL);


	free(n);
}
