#include "main.h"

/**
 * rot13 - uses the cypher rotor to encode strings.
 * @ch: pointer to ch.
 * Return: pointer of a char.
 */

char *rot13(char *ch)
{

	int i = 0;
	int j = 0;
	char *chl = ch;
	char *l = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz";
	char *r13 = "NnOoPpQqRrSsTtUuVvWwXxYyZzAaBbCcDdEeFfGgHhIiJjKkLlMm";

	while (*(ch + i) != '\0')
	{
		while (*(l + j) != '\0')
		{
			if (*(ch + i) == *(l + j))
			{
				*(ch + i) = *(r13 + j);
				break;


			}
			j++;


		}
		j = 0;
		i++;


	}
	return (chl);

}
