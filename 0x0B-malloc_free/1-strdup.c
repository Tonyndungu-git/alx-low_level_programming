#include "main.h"
#include <stdlib.h>

/**
 * _strlen -  function that finds the length of a string.
 * @str: input pointer to str.
 * Return: integer.
 */

int _strlen(const char *str)
{
	int  len = 0;

	while (str[len] != '\0')
		++len;
	return (len);
}

/**
 * _strdup - function that duplicates a pointer to another.
 * @str: pointer to be duplicated.
 * Return: new pointer.
 */

char *_strdup(char *str)
{
	char *n;
	int l;
	int i = 0;

	l = _strlen(str);

	if (str == NULL)
		return (NULL);
	n = malloc(l * sizeof(str));

	if (n == NULL)
		return (NULL);

	while (i < l)
	{

		n[i] = str[i];
		i++;
	}

	return (n);
}
