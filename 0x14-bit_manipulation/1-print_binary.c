#include "main.h"

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
 * print_binary - prints decimal to binary.
 * @n:int.
 * Return: void.
 */



void print_binary(unsigned long int n)
{
	unsigned int res_power = 0;
	int exp = 10;
	int flag;


	if (n == 0)
		_putchar('0');

	while (exp >= 0)
	{
		res_power = mypow(2, exp);
		if (n >= res_power)
		{

			_putchar('1');
			n -= res_power;
			flag = 1;

		}
		else if (n < res_power && flag == 1)
			_putchar('0');
		exp--;
	}

}
