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
	int i, j, x, f;
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
		if (n[i] == NULL)
		{
			for (f = 0; f < i; f++)
				free(n[f]);
			free(n);
			return (NULL);

		}

		i++;

	}
	for (j = 0; j < height; j++)
	{
		for (x = 0; x < width; x++)
			n[j][x] = 0;
	}
	return (n);
}
