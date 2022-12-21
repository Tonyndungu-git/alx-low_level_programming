#include "main.h"

/**
 * _strncat - joins together two strings.
 * @dest: pointer to destination.
 * @src : Pointer to source.
 * @n: integer.
 *Return: character.
 */


char *_strncat(char *dest, char *src, int n)
{
	unsigned int i = 0;
	int j = 0;

	while (*(dest + i) != '\0')
	{

		i++;
	}

	while (*(src + j) != '\0')
	{
		if (j < n)
		{
			*(dest + i) = *(src + j);
			i++;
		}
		j++;
	}

	return (dest);
}
