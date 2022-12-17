#include "main.h"

void print_number(int n)
{
	unsigned int num, num2;
	int i;
	int aux = 1;

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
			aux = aux * 10;
			num = num / 10;
		}
		_putchar((num2 / aux) + '0');
		aux = aux / 10;

		for (i = aux; i >= 1; i = i / 10)
			_putchar((num2 / i) % 10 + '0');
	}
	else
		_putchar(num + '0');
}


int main(void)
{

	int n1 ='1' ;
	int n2 = '2';
	int n3;
	int i;

	_putchar(n1);
	_putchar(44);
	_putchar(20);
	_putchar(n2);
	_putchar(44);
	_putchar(20);

	
	for(i = 2 ; i < 50; i++)
	{
		n3 = n1 + n2;
		if (i != 49)
		{
			print_number(n3);
			_putchar(44);
			_putchar(20);

		}
		else
			print_number(n3);
		n1 = n2;
		n2 = n3;
	}
	_putchar('\n');
	return (0);

}
