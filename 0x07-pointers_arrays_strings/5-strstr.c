#include "main.h"

/**
 *_strstr - function finds the first occurrence of the substring in a string.
 * @haystack: pointer to string.
 * @needle: pointer to substring.
 * Return: char pointer.
 */


char *_strstr(char *haystack, char *needle)
{
	char *a;
	char *b;

	while (*haystack != '0')
	{

		a = haystack;
		b = needle;

		while (*b == *haystack && *b != '\0' && *haystack != '\0')
		{


			haystack++;
			*b++;



		}

		if (*b == '\0')
			return (a);
		haystack = a + 1;
	}
	return (NULL);
}
