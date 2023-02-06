#include "main.h"
#include <string.h>


/**
 * mypow - function that returns the value of x
 * raised to the power of y
 * @x: base number
 * @y: pow number
 * Return: int
 */

int mypow(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * mypow(x, y - 1));
}

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 * Return: the converted number.
 */
unsigned int binary_to_uint(const char *b)
{
	int d = 0;
	int l, i = 0;

	l = strlen(b);

	if (b == NULL)
		return (0);

	while (l-- && l >= 0)
	{
		if (b[l] == '1')
		{
			d += mypow(2, i);
		}
		else if (b[l] != '0')
			return (0);
		i++;
	}

	return (d);
}
