#include "main.h"

/**
 * cap_string - capitaliizes a string
 * @s: pointer to s.
 * Return: character.
 */

char *cap_string(char *s)
{

	int i = 0;


	while (*(s + i) != '\0')
	{
		if (i == 0 && (*(s + i) >= 97 && *(s + i) <= 122))
		{

			*(s + i) = *(s + i) - ' ';
			i++;
		}

		if (*(s + i) == ' ' || *(s + i) == '\n' || *(s + i) == '\t'
		    || *(s + i) == ',' || *(s + i) == ';' || *(s + i) == '!'
		    || *(s + i) == '?' || *(s + i) == '"' || *(s + i) == '('
		    || *(s + i) == ')' || *(s + i) == '{' || *(s + i) == '}'
		    || *(s + i) == '.')
		{
			i++;

			if (*(s + i) >= 97 && *(s + i) <= 122)
			{
				*(s + i) = *(s + i) - ' ';
			}
		}
		else
			i++;


	}
	return (s);
}
