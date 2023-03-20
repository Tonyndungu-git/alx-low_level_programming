#include "main.h"

/**
 * _isdigit - prints 1 if a char is a digit and 0 if its not.
 *@c: charcter
 *Return: 1 or 0
 */

int _isdigit(int c)
{

	if (c >= '0' && c <= '9')
	{
		return (1);

	}
	else
		return (0);

}
