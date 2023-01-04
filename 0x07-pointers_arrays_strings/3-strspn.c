#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: pointer to the string.
 * @accept: pointer to the characters of the prefix.
 * Return: unsigned integer.
 */


unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int j = 0;
	int c;
	unsigned int cont = 0;

	while (*s != '\0')
	{
		c = 0;

		while (*(accept + j) != '\0')
		{

			if (*s == *(accept + j))
				c = 1;
			j++;
		}
		j= 0;

		if (c  == 0)
		{
			break;
		}
		cont += 1;
		s++;


	}
	return (cont);

}
