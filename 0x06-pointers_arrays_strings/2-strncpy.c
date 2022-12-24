#include "main.h"
/**
 * _strncpy - function that copies a string.
 * @dest: pointer to dest.
 * @src : pointer to source string.
 * @n: an integer.
 * Return: a character.
 */



char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;
	char m;

	while (i < n && (*(src + i) != '\0'))
	{
		*(dest + i) = *(src + i);

		i++;

	}
	return (dest);

}
