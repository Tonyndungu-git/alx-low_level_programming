#include "main.h"

/**
 * _isupper - Prints 1 if a char is upper case and 0 if not.
 * @c: charcter
 * Return: 0 or 1.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
