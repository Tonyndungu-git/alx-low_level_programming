#include "main.h"

/**
 *_strstr - function finds the first occurrence of the substring in a string.
 * @haystack: pointer to string.
 * @needle: pointer to substring.
 * Return: char pointer.
 */


char *_strstr(char *haystack, char *needle)
{
char *_strstr(char *haystack, char *needle)
{
	char *res;
	char *aux;

	while (*haystack != '\0')
	{
		res = haystack;
		aux = needle;

		while (*aux == *haystack && *aux != '\0'
		       && *haystack != '\0')
		{
			haystack++;
			aux++;
		}
		if (*aux == '\0')
			return (res);
		haystack = res + 1;
	}
	return (NULL);
}
}
