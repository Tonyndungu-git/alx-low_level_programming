#include "main.h"


/**
 * print_number - function that prints an integer..
 * @n: input value to check
 * Return: nothing.
 */


void print_number(int n)
{

	unsigned int num, num2;
	int i;
	int x = 1;

	if (n < 0)
	{
		n = n * -1;
		_putchar('-');


	}
	num = n;
	num2 = num;

	if (num > 9)
	{
		while (num >= 10)
		{

			x  = x * 10;
			num = num / 10;

		}
		_putchar((num2 / x) + '0');
		x = x / 10;

		for (i = x ; i >= 1; i =  i / 10)
		{
			_putchar((num2 / i) % 10 + '0');
		}


	}
	else
		_putchar(num + '0');

}
