#include "main.h"
/**
 * _memcpy - Write a function that copies memory area.
 * @dest: pointer where the memry will be copied.
 * @src: pointer where the source characters are in.
 * @n: size of buffer.
 * Return: retrns a character.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *d = dest;
	char *s = src;

	while (n--)
		*d++ = *s++;
	return (dest);
}
