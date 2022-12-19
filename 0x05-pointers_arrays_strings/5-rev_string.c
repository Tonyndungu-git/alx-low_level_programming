#include "mai.h"
/**
 * rev_string - function that reverses a string.
 * @s: String to reverse
 * Return: nothing.
 */

void rev_string(char *s)
{
	int i = 0;
	int a = 0;
	char l;

	while (*(s + i) != '\0')
		i += 1;
	i -= 1;

	while (a < i)
	{
		l = s[i];
		s[i] = s[a];
		s[a] = l;
		a++;
		i--;
	}
}
