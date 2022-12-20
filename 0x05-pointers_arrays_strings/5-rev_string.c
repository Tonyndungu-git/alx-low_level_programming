#include "main.h"
/**
 * rev_string - function that reverses a string.
 * @s: String to reverse
 * Return: nothing.
 */

#include "main.h"
#include <stdio.h>

void rev_string(char *s)
{


	int j = 0;
	int i = 0;
	char *l;
	char k;
	char m;

	l = s;

	while (*(s + i) != '\0')
	{

		i++;

	}
	i--;
	j = 0;
	while (j <= i)
	{

		k = *(s + j);
		m = *(l + i);
		*(s + j) = m;
		*(l + i) = k;

		j++;
		i--;
	}

}
