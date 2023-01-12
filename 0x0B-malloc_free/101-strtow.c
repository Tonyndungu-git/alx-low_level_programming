#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * strtow - function that splits a string into words.
 * @str: pointer to a string.
 * Return: pointer to a pointer.
 */


char **strtow(char *str)
{
	int i, j, n, count = 0;
	char **result;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			count++;
	}
	result = (char **) malloc((count + 1) * sizeof(char *));

	for (i = 0, j = 0; str[j] != '\0'; j++)
	{
		if (str[j] != ' ')
		{
			if (i == 0 || str[j - 1] == ' ')
			{
				n = (strlen(str) + 1);
				result[i] = (char *) malloc(sizeof(char) * n);

				int k = 0;

				while (str[j] != ' ' && str[j] != '\0')
					result[i][k++] = str[j++];
				result[i][k] = '\0';
				i++;
			}
		}
	}
	result[count] = NULL;
	return (result);
}
