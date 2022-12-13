#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number.
 * @last: The input number to check
 * Return: int.
 */

int print_last_digit(int last)
{

	last %= 10;

	if (last < 0)
		last *= -1;

	_putchar(last + '0');
	return (last);
}
