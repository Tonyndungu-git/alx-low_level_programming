#include "main.h"

/**
 * _strchr - function that locates a character in a string.
 * @s: pointer to the string s.
 * @c: character to be found.
 * Return: character being searched.
 */

char *_strchr(char *s, char c)
{

	while (*s != c)
	{

		if (!*s++)
			return (0);
	}
	return (s);
}
