#include "main.h"
#include <stdlib.h>
#include <stdio.h>
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
 * _memcpy -  function copies a string pointer to another.
 * @src: the souce pointer string.
 * @dest: the destination pointer string.
 * @n: lenth of the new string.
 * Return: pointer to a char.
 */


char *_memcpy(char *dest, char *src, int n)
{


	char *csrc = src;
	char *cdest = dest;
	int i = 0;

	while (i < n)
	{
		cdest[i] = csrc[i];
		i++;
	}
	return (dest);
}

/**
 * str_concat -  function that joins two strings to a new pointer.
 * @s1: pointer to string 1.
 * @s2: ponter to string 2.
 * Return: pointer to char.
 */

char *str_concat(char *s1, char *s2)
{
	char *nul = "";
	int l_1;
	int l_2;
	if (s1 == NULL)
		s1 = nul;
	if (s2 == NULL)
		s2 = nul;

	l_1 = _strlen(s1);
	l_2 = _strlen(s2);

	char *r = malloc((l_1 + l_2 + 1) * sizeof(char*));

	_memcpy(r, s1, l_1);
	_memcpy(r + l_1, s2, l_2 + 1);

	return (r);
}

int main(void)
{
    char *s;
    s = str_concat("Betty ", "Holberton");
    if (s == NULL)
    {
        printf("failed\n");
        return (1);
    }
    printf("%s\n", s);
    free(s);
    return (0);
}
