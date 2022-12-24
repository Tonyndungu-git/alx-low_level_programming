#include "main.h"

/**
 * leet - encodes a string into 1337.
 * @s: pointer to string s.
 * Return: Character.
 */

char *leet(char *s)
{


	int i = 0;
	int j = 0;
	char *l = "AaEeOoTtLL";
	char *r = "4433007711";

	while (*(s + i) != '\0')
	{
		while (*(l + j) != '\0')
		{
			if (*(s + i) == *(l + j))
			{
				*(s + i) = *(r + j);

			}
			j++;
		}
		j = 0;
		i++;
	}
	return (s);
}
