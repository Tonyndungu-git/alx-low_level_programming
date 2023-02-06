#include "main.h"
#include <stdio.h>

/**
 * get_bit - returns the value of a bit at a given index
 * @n: number
 * @index: index
 * Return: value at the given index
 */



int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;
	unsigned int s;

	mask = 1;
	s = 0;

	while (mask < 2147483648)
	{
		if (s == index)
		{

			if ((mask & n) == 0)
				return (0);
			else
				return (1);

		}
		s++;
		mask = mask << 1;

	}
	return (-1);
}
