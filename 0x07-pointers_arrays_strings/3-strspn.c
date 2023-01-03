#include "main.h"
#include <stdio.h>

/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: pointer to the string.
 * @accept: pointer to the characters of the prefix.
 * Return: unsigned integer.
 */


unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int j = 0;

	while (*(s + i) != '\0')
	{
		j = 0;

		while (*(accept + j) != '\0')
		{

			if (*(s + i) == *(accept + j))
				break;
			j++;
		}
		i++;

		if (*(accept + j) == '\0')
		{
			break;
		}

	}
	i--;
	return (i);

}

int main(void)
{
    char *s = "hello, world";
    char *f = "oleh";
    unsigned int n;

    n = _strspn(s, f);
    printf("%u\n", n);
    return (0);
}
