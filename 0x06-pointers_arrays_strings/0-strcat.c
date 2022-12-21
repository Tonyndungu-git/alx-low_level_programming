#include "main.h"


/**
 * _strcat - joins two strings together.
 * @dest: pointer to destination string.
 * @src: Pointer to source string.
 * Return: pointer of a char.
 */
char *_strcat(char *dest, char *src)
{

	unsigned int i = 0;
	unsigned int j = 0;

	while (*(dest + i) != '\0')
		i++;
	while (*(src + j) != '\0')
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	return (dest);
}

