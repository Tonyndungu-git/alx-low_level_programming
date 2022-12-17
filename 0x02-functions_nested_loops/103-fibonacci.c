#include <stdio.h>

/**
 *main - add even fibonacci numbers
 *Return: 0
 */

int main(void)
{

	long n1 =1 ;
	long n2 = 2;
	long n3;
	long n4;
	int i;

	for(i = 2 ; i < 50; i++)
	{
		n3 = n1 + n2;
		if (n3 < 4000000)
		{
			if ( n3 % 2 == 0)
			{
				n4 += n3;
			}

		}
		else
			break;
		n1 = n2;
		n2 = n3;
	}
	printf("%ld", n4);
	printf("\n");
	return (0);

}
