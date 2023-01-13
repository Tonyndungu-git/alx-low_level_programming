#include "main.h"
#include <stdlib.h>
#include  <string.h>

/**
 * string_nconcat - function that concatenates two strings.
 * @s1: pointer to char s1.
 * @s2: pointer to char s2.
 * @n: max int length of s2.
 * Return: a char pointer.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int i = 0, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	result = malloc(strlen(s1) + n + 1);
	if (result == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		result[i] = s1[i];
		i++;
	}
	while (j < n && s2[j] != '\0')
	{
		result[i + j] = s2[j];
		j++;
	}
	result[i + j] = '\0';
	return (result);
	if (result == NULL)
		return (NULL);
}
