#include <stdio.h>

/**
 * _strcpy - copies a string to a different address.
 * @dest: destination pointer
 * @src: original address pointer
 * Return: char
 */
char *_strcpy(char *dest, char *src)
{


	int i;

	i = 0;
	while (src[i] != '0')
	{

		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i)  = '\0';

	return (dest);
}
