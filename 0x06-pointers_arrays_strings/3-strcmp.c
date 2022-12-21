#include "main.h"
/**
 * _strcmp - compares two numbers and gives an output.
 * @s1: pointer to s1.
 * @s2: pointr to s2.
 * Return: an int.
 */
int _strcmp(char *s1, char *s2)
{


	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 == *s2)
			return (0);
		else
			return (*s1 - *s2);

	}

}
