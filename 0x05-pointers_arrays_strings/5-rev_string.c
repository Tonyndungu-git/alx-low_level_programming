#include "main.h"
#include <stdio.h>
/**
 *rev_string - reverses a string
 *@s: pointer s
 *Return: void
 */


void rev_string(char *s)
{
	char *l;
	char tmp;

	l = s;

	while (*(l + 1) != '0')
	{
		l = l + 1;
	}
	while (s < l)
	{
		tmp = *s;
		*s = *l;
		*l = tmp;
		s = s + 1;
		l = l - 1;
	}

}
