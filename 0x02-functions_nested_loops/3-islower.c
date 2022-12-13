#include "main.c"
/**
 * _islower - function that prints detects if a characte is lowercase
 * You can only use _putchar twice in your code
 * Return: 1 and 0
 */

int _islower(int c)
{

	if (c >= 97 && c <= 122)
	{
		return (1);

	}

	else
		return (0);


}
