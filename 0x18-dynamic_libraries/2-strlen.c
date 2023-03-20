#include "main.h"
/**
 * _strlen - gives the length of a string.
 *@s: pointer to s.
 *Return: length of s.
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;

	}
	return (i);

}
