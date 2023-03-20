#include "main.h"
#include <stdio.h>
/**
 * _memset - function that fills memory with a constant byte.
 * @s: pointer to the buffer.
 * @b: character to fill the buffer
 * @n: size of the buffer.
 * Return: character.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
